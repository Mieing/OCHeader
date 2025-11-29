@class NSString;

@interface AWEVideoHallUtils : NSObject <AWEVideoHallUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)getVerticalCoverUrlString:(id)a0;
+ (void)getVideoHallEntranceStatus:(id /* block */)a0;
+ (BOOL)isGotoLongVideoPage:(id)a0;
+ (long long)paymentTypeFromAlbum:(long long)a0;
+ (void)didClickOpenAlert;
+ (void)addVideoHallEntranceWithIsNewVersion:(BOOL)a0 completion:(id /* block */)a1;
+ (id)getHistoryPageUrl;
+ (id)tagString:(long long)a0;
+ (id)tagBackgroundColor:(long long)a0;
+ (id)tagFontColor:(long long)a0;
+ (BOOL)showTag:(long long)a0;
+ (BOOL)showScore:(id)a0;
+ (id)updateCycleString:(id)a0;
+ (BOOL)enableLongVideoSearch;
+ (void)trackLVideoGuideButtonClick:(id)a0 buttonName:(id)a1 section:(id)a2;
+ (void)trackLVideoAddGuideSuccess:(id)a0 addMethod:(id)a1;
+ (void)showAddVideoHallEntranceGuideWithTitle:(id)a0 subtitle:(id)a1 guideCoverImage:(id)a2 guideCoverAnimateImage:(id)a3 isNewVersion:(BOOL)a4 addMethod:(id)a5 enable:(BOOL)a6 delegateObject:(id)a7 completion:(id /* block */)a8;
+ (id)commonGuideTrackParams:(id)a0 previousPage:(id)a1 logPb:(id)a2;
+ (void)clickAddVideoHallEntranceGuide:(id)a0 title:(id)a1 subTitle:(id)a2 guideCoverImage:(id)a3 guideCoverAnimateImage:(id)a4 isNewVersion:(BOOL)a5 addMethod:(id)a6 enable:(BOOL)a7 delegateObject:(id)a8 completion:(id /* block */)a9;
+ (void)trackLVideoGuideShow:(id)a0;
+ (void)trackLVideoGuideClickAction:(id)a0 actionType:(id)a1;
+ (void)trackLVideoButtonShow:(id)a0 previousPage:(id)a1 logPb:(id)a2;
+ (void)trackLVideoButtonClick:(id)a0 previousPage:(id)a1 logPb:(id)a2;
+ (void)trackLVideoButtonClickResult:(id)a0 previousPage:(id)a1 logPb:(id)a2 clickResult:(id)a3;
+ (void)trackLVideoTicketSnackBarShow:(id)a0 previousPage:(id)a1 type:(BOOL)a2;
+ (void)trackLVideoTicketSnackBarClick:(id)a0 previousPage:(id)a1 type:(BOOL)a2;
+ (void)trackLVideoTicketFailToastShow:(id)a0 previousPage:(id)a1 failCode:(long long)a2 toastText:(id)a3;
+ (BOOL)shouldShowVideoHallEntranceGuideWithPageName:(id)a0 closeDuration:(long long)a1 maxCloseNum:(long long)a2;
+ (void)updateVideoHallEntranceGuideFrequentControl:(id)a0;

- (id)aAWEBrandColorAdapter;

@end
