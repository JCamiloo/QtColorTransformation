#ifndef HISTOGRAM_H
#define HISTOGRAM_H
#include "QImage"

class histogram
{
public:
    histogram();
    void calculateHistogram(QImage image);
    void calculateAccumulatedFrequency();
    void equalizeHistogram(QImage image);
    int* getHistogram(){
        return histogramArray;
    }
    int calculateThreshold(ThresMethod thres);

private:

    int histogramArray[256] = {};
    int accumulatedFrequency[256] = {};
    int equalizedHistogram[256] = {};
    int newValues[256] = {};
    QImage qEqualizedImage;
};

#endif // HISTOGRAM_H
