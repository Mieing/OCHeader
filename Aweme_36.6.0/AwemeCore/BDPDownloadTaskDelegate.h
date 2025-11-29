@class BDPRequestMetrics;

@interface BDPDownloadTaskDelegate : NSObject

@property (copy, nonatomic) id /* block */ receivedDataBlk;
@property (copy, nonatomic) id /* block */ completedBlk;
@property (retain, nonatomic) BDPRequestMetrics *metrics;

- (void).cxx_destruct;

@end
