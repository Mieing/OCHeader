@interface AWEMVCardUtils : NSObject

+ (BOOL)isLiveCard:(id)a0;
+ (BOOL)isLongVideo:(id)a0;
+ (id)formateDuration:(id)a0;
+ (id)titleWithAwemeModel:(id)a0;
+ (BOOL)isLandscapeVideo:(id)a0;
+ (BOOL)isFakeLandscapeVideo:(id)a0;
+ (BOOL)isPortraitVideo:(id)a0;
+ (BOOL)isPlaylet:(id)a0;
+ (BOOL)isLargeCard:(id)a0;
+ (void)createCardConfigIfNeeded:(id)a0 context:(id)a1;
+ (BOOL)isSmallBanner:(id)a0;
+ (BOOL)isImageAlbumCard:(id)a0;
+ (id)countStrForNum:(id)a0 type:(long long)a1;
+ (BOOL)isLiveScene:(id)a0;
+ (BOOL)isSmallCardLiveScene:(id)a0;
+ (BOOL)isPaidLiveScene:(id)a0;
+ (id)liveRoomStatusWithModel:(id)a0;
+ (BOOL)isVSScene:(id)a0;
+ (BOOL)isLargeBanner:(id)a0;
+ (id)getTitleSource:(id)a0;
+ (BOOL)enableForPad;
+ (BOOL)isAppointment:(id)a0;
+ (BOOL)isReplayCard:(id)a0;
+ (BOOL)isSvrLargeCard:(id)a0;
+ (BOOL)hasLargeCardUrl:(id)a0;
+ (BOOL)isLargeCardLandscapeCover:(id)a0;
+ (void)updateCardConfigRightBottomActionWithModel:(id)a0 config:(id)a1;
+ (BOOL)isLiveRoom:(id)a0;
+ (BOOL)isReplay:(id)a0;
+ (BOOL)isSmallCardReplay:(id)a0;
+ (BOOL)isSmallCardLiveRoom:(id)a0;
+ (BOOL)isVSLiveMergeLive:(id)a0;
+ (BOOL)isVSLiveMergePremiere:(id)a0;
+ (BOOL)isHorizontalLiveCard:(id)a0;
+ (BOOL)isValidLargeCard:(id)a0;
+ (BOOL)isSmallCard:(id)a0;
+ (BOOL)isMixVideo:(id)a0;
+ (BOOL)isMixAlbum:(id)a0;
+ (void)createLiveCardConfigIfNeeded:(id)a0;
+ (BOOL)isVerticalSmallCardLiveRoom:(id)a0;
+ (BOOL)isHorizontalSmallCardLiveRoom:(id)a0;

@end
