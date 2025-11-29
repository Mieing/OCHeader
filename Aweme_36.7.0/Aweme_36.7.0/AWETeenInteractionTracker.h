@interface AWETeenInteractionTracker : NSObject

+ (void)trackFavouriteWithModel:(id)a0 favourite:(BOOL)a1 VcType:(long long)a2 extra:(id)a3;
+ (void)trackLikeWithModel:(id)a0 extra:(id)a1;
+ (void)trackMorePanelShowWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 enterPosition:(id)a3 downloadStatus:(id)a4 fullscreen:(BOOL)a5 inAlbum:(BOOL)a6;
+ (void)trackSysPhotoButtonShowWithModel:(id)a0 enterFrom:(id)a1 fullscreen:(BOOL)a2;
+ (void)trackReportWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 context:(id)a3 fullscreen:(BOOL)a4;
+ (void)trackShareClickWithModel:(id)a0 VcType:(long long)a1 platform:(id)a2 fullscreen:(BOOL)a3;
+ (void)trackDownloadClickWithModel:(id)a0 enterFrom:(id)a1 fullscreen:(BOOL)a2;
+ (void)trackSysPhotoButtonClickWithModel:(id)a0 enterFrom:(id)a1 fullscreen:(BOOL)a2;
+ (void)trackClickChangeSpeedEntrance:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)trackChangeSpeedMode:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 speedMode:(id)a3;
+ (void)trackDislikeWithModel:(id)a0 context:(id)a1;
+ (void)trackClickMoreWithModel:(id)a0 context:(id)a1;
+ (void)trackTimeBarDrawWithAction:(id)a0 model:(id)a1 context:(id)a2;
+ (void)trackAnchorViewClickWithAnchroInfo:(id)a0 context:(id)a1;
+ (void)trackAnchorViewShowWithAnchroInfo:(id)a0 context:(id)a1;
+ (void)trackShowStrongSubscribeWithModel:(id)a0 context:(id)a1;
+ (void)trackDownloadEndWithModel:(id)a0 enterFrom:(id)a1 endStatus:(id)a2 duration:(double)a3 fullscreen:(BOOL)a4;
+ (void)trackSysPhotoPermissionPopupWithEnterFrom:(id)a0;
+ (void)trackSysPhotoPermissionSettingClickWithEnterFrom:(id)a0;
+ (void)trackEncyKonwledgeClickWithModel:(id)a0 context:(id)a1 showType:(id)a2;
+ (void)trackTeenGrootEntranceClickWithModel:(id)a0 context:(id)a1 pediaID:(id)a2;

@end
