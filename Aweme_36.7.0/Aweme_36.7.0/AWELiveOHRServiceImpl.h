@class NSString;

@interface AWELiveOHRServiceImpl : NSObject <IESLiveOHRService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)recentlyUsedHand;
- (long long)lastSessionMostUsedHand;
- (BOOL)isCrossedHand;
- (long long)lastUseHand;
- (long long)mostUseHand;

@end
