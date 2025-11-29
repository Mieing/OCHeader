@interface AWEConcernSpecialFollowTracker : NSObject

+ (id)stringFromEntrancePosition:(unsigned long long)a0;
+ (void)trackSpecialFollowPopupWithActionType:(unsigned long long)a0;
+ (void)trackSpecialFollowToastShowWithText:(id)a0;
+ (void)trackSpecialFollowUserID:(id)a0 enterFrom:(id)a1 entrancePosition:(unsigned long long)a2 followPanelPosition:(unsigned long long)a3 logExtra:(id)a4;
+ (void)trackSpecialFollowCancelUserID:(id)a0 enterFrom:(id)a1 entrancePosition:(unsigned long long)a2 followPanelPosition:(unsigned long long)a3 logExtra:(id)a4;
+ (void)trackSpecialFollowEntranceShowWithUserID:(id)a0 enterFrom:(id)a1 entrancePosition:(unsigned long long)a2 followPanelPosition:(unsigned long long)a3;
+ (unsigned long long)followPanelPostionFromMenuShowMethod:(unsigned long long)a0;
+ (id)stringFromFollowPanelPosition:(unsigned long long)a0;
+ (id)stringFromActionType:(unsigned long long)a0;

@end
