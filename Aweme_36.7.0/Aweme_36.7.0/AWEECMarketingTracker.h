@class NSString;

@interface AWEECMarketingTracker : NSObject <AWEECTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendEntranceInfoWithModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)bcmBiz;

@end
