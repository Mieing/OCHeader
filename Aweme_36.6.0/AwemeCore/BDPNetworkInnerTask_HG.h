@class BDPRequestMetrics, NSDictionary, NSString;
@protocol BDPNetworkTaskProtocol;

@interface BDPNetworkInnerTask_HG : NSObject {
    id<BDPNetworkTaskProtocol> _realTask;
    unsigned long long _requestType;
    NSDictionary *_param;
    NSString *_stateChangeEvent;
}

@property (retain, nonatomic) BDPRequestMetrics *metrics;

- (void).cxx_destruct;

@end
