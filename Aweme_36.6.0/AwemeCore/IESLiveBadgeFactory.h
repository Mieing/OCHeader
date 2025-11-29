@protocol IESLiveWebImageService, IESLiveSettings;

@interface IESLiveBadgeFactory : NSObject

@property (retain, nonatomic) id<IESLiveSettings> setting;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (nonatomic) BOOL showEcomFansClub;
@property (nonatomic) BOOL showFansOrFriendsBadge;
@property (nonatomic) BOOL showNewVipBadge;
@property (nonatomic) double scale;

- (id)accessibilityStringFromBadgeList:(id)a0;
- (void)appendBadgeListIn:(id)a0 rangeNum:(unsigned long long *)a1 rangeWidth:(unsigned long long *)a2 rangeHeight:(unsigned long long *)a3 badgeList:(id)a4;
- (void)appendBadgeListIn:(id)a0 rangeNum:(unsigned long long *)a1 rangeWidth:(unsigned long long *)a2 rangeHeight:(unsigned long long *)a3 badgeList:(id)a4 isMessageFilter:(BOOL)a5;
- (id)p_filteredBadgeListFrom:(id)a0;
- (id)p_processSpecialBadge:(id)a0;
- (double)getFontSizeWith:(id)a0;
- (id)badgeImageNodesWithBadgeList:(id)a0 skipFilter:(BOOL)a1;
- (id)p_getBrotherGroupIcon:(id)a0 name:(id)a1 level:(id)a2 fontColor:(id)a3;
- (id)p_getOldFansclubIcon:(id)a0 name:(id)a1 fontColor:(id)a2;
- (id)p_getFansclubIcon:(id)a0 name:(id)a1 fontColor:(id)a2;
- (id)p_getCityIcon:(id)a0 name:(id)a1 fontColor:(id)a2;
- (id)p_getBadgeIcon:(id)a0;
- (BOOL)enableShowRankRights;
- (id)p_getRelationTagIcon:(id)a0;
- (long long)p_levelFromFansBadge:(id)a0;
- (id)p_getIconKeyByModel:(id)a0;
- (id)imageABForMemoryWithIconKey:(id)a0;
- (id)p_composeBrotherGroupIconWithImage:(id)a0 title:(id)a1 fontColor:(id)a2;
- (id)p_composeCityIconWithImage:(id)a0 title:(id)a1 fontColor:(id)a2;
- (void)monitorBadgeBuildErrorWithImage:(id)a0 error:(id)a1 xmpErrorCode:(long long)a2;
- (id)p_composeIconWithImage:(id)a0 title:(id)a1 fontColor:(id)a2 isSubscribe:(BOOL)a3 flexSetting:(id)a4 textSetting:(id)a5 ninepatchInfo:(id)a6;
- (id)p_composeOldIconWithImage:(id)a0 title:(id)a1 fontColor:(id)a2 isSubscribe:(BOOL)a3;
- (void)appendBadgeListIn:(id)a0 badgeList:(id)a1;
- (void)calculateRangeNum:(unsigned long long *)a0 rangeWidth:(unsigned long long *)a1 rangeHeight:(unsigned long long *)a2 badgeList:(id)a3;
- (id)badgeImageNodesWithBadgeList:(id)a0;
- (id)createImageFromBadge:(id)a0;
- (void).cxx_destruct;

@end
