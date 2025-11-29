@class NSString;

@interface AWEECTabMallBadgeBubbleTracker : NSObject <AWEECTabMallBadgeBubbleTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackBubbleShowResult:(long long)a0 withBubbleInfo:(id)a1 source:(id)a2;
+ (void)trackBubbleDismiss:(long long)a0 withBubbleInfo:(id)a1 source:(id)a2;
+ (void)trackBadgeEvent:(id)a0 withModel:(id)a1 andParams:(id)a2;
+ (void)trackBadgeShowResult:(long long)a0 withModel:(id)a1 params:(id)a2;
+ (void)trackBadgeHidden:(long long)a0 withModel:(id)a1 params:(id)a2;
+ (void)trackBadgeDowngrade:(long long)a0 withModel:(id)a1 params:(id)a2;
+ (void)trackBubbleEvent:(id)a0 withBubbleInfo:(id)a1 andParams:(id)a2;
+ (void)trackBadgeHidden:(long long)a0 withModel:(id)a1 source:(id)a2;
+ (void)trackBadgeDowngrade:(long long)a0 withModel:(id)a1 source:(id)a2;
+ (void)trackBadgeEvent:(id)a0 withParams:(id)a1;


@end
