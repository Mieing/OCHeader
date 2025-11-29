@protocol AWEECVideoToMallParamsStrategyProtocol;

@interface AWEECVideoToMallParams : NSObject

@property (retain, nonatomic) id<AWEECVideoToMallParamsStrategyProtocol> strategy;

- (id)videoToMallContextWithObject:(id)a0;
- (id)videoGuideMallParamsWithObject:(id)a0;
- (void).cxx_destruct;

@end
