@class NSString;

@interface AWEECLiveGuideTracker : NSObject <AWEECTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendEntranceInfoWithModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)bcmBiz;
- (id)generateResult:(id)a0 index:(unsigned long long)a1 distance:(unsigned long long)a2;

@end
