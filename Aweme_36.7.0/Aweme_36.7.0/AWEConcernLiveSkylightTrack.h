@interface AWEConcernLiveSkylightTrack : NSObject

+ (void)trackShowAvatarAtIndexPath:(id)a0 pageType:(id)a1 cellModel:(id)a2 skylightView:(id)a3;
+ (id)trackParamsWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (id)requestIDWithRoomModel:(id)a0;
+ (void)trackSkylightCellAtIndex:(long long)a0 moduleIndex:(long long)a1 event:(id)a2 pageType:(id)a3 cellNumber:(long long)a4 cellModel:(id)a5;
+ (void)trackSkylightStickyUnreadViewWithEvent:(id)a0 model:(id)a1;
+ (void)trackCloseSkylightByClick:(BOOL)a0;
+ (void)trackShowSkylightWithActionMethod:(unsigned long long)a0 actualLiveCount:(long long)a1 cellCount:(long long)a2 skylightCellListStr:(id)a3 hasSpecialFollow:(BOOL)a4;
+ (void)trackRefreshSkylightByAuto:(BOOL)a0;
+ (void)trackRefreshSkylightLiveWithType:(id)a0;
+ (void)trackShowAvatarAtIndexPath:(id)a0 pageType:(id)a1 cellModel:(id)a2;

@end
