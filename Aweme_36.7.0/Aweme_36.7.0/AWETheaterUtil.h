@class NSString;

@interface AWETheaterUtil : NSObject <AWETheaterUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTheaterAnnieXCardReuse;
+ (BOOL)isGotoLongVideoPage:(id)a0;
+ (id)createTheaterPreferGuideInfoPanel:(id)a0 title:(id)a1 buttonTitle:(id)a2 buttonClickBlock:(id /* block */)a3 color:(id)a4 buttonBackColor:(id)a5 contentType:(id)a6 guideCoverImage:(id)a7;
+ (id)noviceGuideFrequencyControlKey;
+ (id)createNoviceGuideInfoPanel:(id)a0 title:(id)a1 subTitle:(id)a2 buttonTitle:(id)a3 buttonClickBlock:(id /* block */)a4 color:(id)a5 guideCoverImage:(id)a6 guideCoverAnimateImage:(id)a7;
+ (id)searchPageURL;
+ (id)accountPageURL:(BOOL)a0;
+ (id)calculateBannerHeaderColor:(id)a0 themeStyle:(long long)a1;
+ (BOOL)shouldShowBannerTag:(id)a0;
+ (id)bannerTagText:(id)a0;
+ (id)bannerTagTextColor:(id)a0;
+ (id)bannerTagBackgroundColor:(id)a0;
+ (id)historyTagText:(id)a0;
+ (id)historyTagTextColor:(id)a0;
+ (id)historyTagBackgroundColor:(id)a0;
+ (BOOL)shouldShowHistoryTag:(id)a0;
+ (id)historyPageURL:(BOOL)a0;
+ (BOOL)shouldShowMoreFeedTagBeforePlay:(id)a0;
+ (id)moreFeedTagText:(id)a0;
+ (id)moreFeedTagTextColor:(id)a0;
+ (id)moreFeedTagBackgroundColor:(id)a0;
+ (id)moreFeedPlayerCover:(id)a0;
+ (BOOL)shouldShowMoreFeedScore:(id)a0;
+ (id)moreFeedUpdateInfoText:(id)a0;
+ (id)moreFeedTitle:(id)a0;
+ (id)moreFeedSubTitle:(id)a0;
+ (id)moreFeedQuoteText:(id)a0;
+ (id)calculateMoreFeedMetaColor:(id)a0 themeStyle:(long long)a1;
+ (id)moreFeedMetaCover:(id)a0;
+ (void)addPersonalPageTheaterEntrance:(id)a0;
+ (void)showAppointmentAlert:(id)a0;
+ (void)didClickOpenAlert;
+ (id)playletTagText:(id)a0;
+ (id)playletTagTextColor:(id)a0;
+ (id)playletTagBackgroundColor:(id)a0;
+ (id)appointmentCount:(id)a0;
+ (id)appointmentTime:(id)a0;
+ (id)buildLongVideoTypeLabel:(id)a0;
+ (id)buildPlayletTypeLabel:(id)a0;
+ (id)numberWithFloat:(double)a0 minimumFractionDigits:(unsigned long long)a1 maximumFractionDigits:(unsigned long long)a2 minimumIntegerDigits:(unsigned long long)a3 maximumIntegerDigits:(unsigned long long)a4;
+ (unsigned long long)playletTagType:(id)a0;
+ (BOOL)shouldShowTheaterEntranceGuideWithPageName:(id)a0 closeDuration:(long long)a1 maxCloseNum:(long long)a2;
+ (void)clickAddTheaterEntranceGuide:(id)a0 previousPage:(id)a1 title:(id)a2 subTitle:(id)a3 guideCoverImage:(id)a4 guideCoverAnimateImage:(id)a5 isNewVersion:(BOOL)a6 addMethod:(id)a7 enable:(BOOL)a8 delegateObject:(id)a9 logPassBack:(id)a10 completion:(id /* block */)a11;
+ (void)updateTheaterEntranceGuideFrequentControl:(id)a0;
+ (id)createAnchorGuideInfoPanel:(id)a0 title:(id)a1 subTitle:(id)a2 buttonTitle:(id)a3 buttonClickBlock:(id /* block */)a4 color:(id)a5 guideCoverImage:(id)a6 guideCoverAnimateImage:(id)a7;
+ (id)anchorGuideFrequencyControlKey;
+ (id)moreFeedScoreText:(id)a0;
+ (BOOL)isDynamicTheater;


@end
