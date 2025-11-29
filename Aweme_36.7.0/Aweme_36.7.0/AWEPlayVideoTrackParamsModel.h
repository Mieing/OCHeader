@class NSDictionary;

@interface AWEPlayVideoTrackParamsModel : NSObject

@property (retain, nonatomic) NSDictionary *trackedEventParams;
@property (copy, nonatomic) NSDictionary *defaultParams;
@property (copy, nonatomic) NSDictionary *playerExtraParams;

- (void)recordTrackedEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
