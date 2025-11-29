@class POIFlutterDataReport, WCFinderPOIRelatedStreamViewModel, NSMutableDictionary, NSString, POIFlutterAPI;
@protocol FinderPOIPluginDelegate;

@interface FinderPOIPlugin : NSObject <POINativeAPI, WCFinderPoiPageViewModelDelegate, MMFlutterPlugin>

@property (retain, nonatomic) POIFlutterAPI *flutterAPI;
@property (retain, nonatomic) POIFlutterDataReport *dataReportAPI;
@property (retain, nonatomic) WCFinderPOIRelatedStreamViewModel *relatedStreamViewModel;
@property (retain, nonatomic) NSMutableDictionary *pageViewModels;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSMutableDictionary *exposeTimeDict;
@property (weak, nonatomic) id<FinderPOIPluginDelegate> delegate;
@property (nonatomic) BOOL didScrollToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommentScene:(int)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)reloadHeadWithInfo:(id)a0;
- (void)reloadHeadWithServiceInfo:(id)a0;
- (void)reloadPOIStream:(id)a0;
- (void)makePhoneCallPhoneNumber:(id)a0 error:(id *)a1;
- (void)onChangeScrollStateIsTop:(BOOL)a0 error:(id *)a1;
- (void)onNavigateButtonTapWithError:(id *)a0;
- (void)onTakeCarButtonTapWithError:(id *)a0;
- (void)onChangeFavoriteStateSelected:(BOOL)a0 error:(id *)a1;
- (void)onForwardButtonTapWithError:(id *)a0;
- (void)onAddressEntranceTapWithError:(id *)a0;
- (void)onETATapWeAppId:(id)a0 weAppUrl:(id)a1 error:(id *)a2;
- (void)onFlutterUIParamUpdateKeyIndex:(long long)a0 value:(double)a1 error:(id *)a2;
- (void)showTipsDialogMessage:(id)a0 btnWording:(id)a1 error:(id *)a2;
- (void)showTextToastMessage:(id)a0 error:(id *)a1;
- (void)onRequestPOIStreamTabIndex:(long long)a0 filterIndex:(long long)a1 isReload:(BOOL)a2 completion:(id /* block */)a3;
- (void)onFeedTapItemIndex:(long long)a0 sectionIndex:(long long)a1 tabIndex:(long long)a2 filterIndex:(long long)a3 visibleCellsInfoJSON:(id)a4 error:(id *)a5;
- (void)openMPWebView:(id)a0 extraInfo:(id)a1 hasItemShowType:(BOOL)a2 itemShowType:(unsigned int)a3;
- (void)onFeedExposeItemIndex:(long long)a0 sectionIndex:(long long)a1 tabIndex:(long long)a2 filterIndex:(long long)a3 isEnd:(BOOL)a4 x:(double)a5 y:(double)a6 width:(double)a7 height:(double)a8 error:(id *)a9;
- (id)streamReportUDFKV:(id)a0;
- (void)callNativeShowMoreMenuPanelWithError:(id *)a0;
- (id)getUserLocationInfoFromNativeMapWithError:(id *)a0;
- (void)showSuccessToastMsg:(id)a0 error:(id *)a1;
- (int)getEnterScene;
- (id)getLiveFeedChannelExtraWithContentVM:(id)a0;
- (id)pageViewModelAtTabIndex:(unsigned long long)a0 filterIndex:(unsigned long long)a1;
- (id)generateUpdateDataWithTabIndex:(unsigned long long)a0 filterIndex:(unsigned long long)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3 isReload:(BOOL)a4;
- (void)finderPoiReloadAllData:(id)a0;
- (void)finderPoiAppendDataFrom:(long long)a0 toIndex:(long long)a1 viewModel:(id)a2;
- (void)finderPoiNoMoreData:(id)a0;
- (void)finderPoiInvalidWithErrorCode:(int)a0 viewModel:(id)a1;
- (void).cxx_destruct;

@end
