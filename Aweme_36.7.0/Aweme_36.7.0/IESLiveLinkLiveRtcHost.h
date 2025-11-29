@class NSMutableArray;

@interface IESLiveLinkLiveRtcHost : NSObject

@property (copy, nonatomic) NSMutableArray *liveRtcApiHosts;
@property (copy, nonatomic) NSMutableArray *liveRtcSignalingHosts;
@property (copy, nonatomic) NSMutableArray *liveRtcAccessHosts;

- (void).cxx_destruct;
- (id)init;

@end
