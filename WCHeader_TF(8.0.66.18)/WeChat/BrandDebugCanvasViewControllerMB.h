@class MemoryMappedKV, NSString, UITextField, MMPageSheetAdapter, BrandDebugCanvasTmplMsg;

@interface BrandDebugCanvasViewControllerMB : BrandDebugBaseViewControllerMB <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) BrandDebugCanvasTmplMsg *tmpMsg;
@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (retain, nonatomic) UITextField *testADInfoTextField;
@property (retain, nonatomic) UITextField *testMbAdJsTextField;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)initDebugItems;
- (void)onOpenAdCanvasDebug;
- (void)onDeleteAdExposeConfig;
- (void)onInsertTemplatelAdMsg;
- (void)__insertTemplateTmplAdMsg;
- (void)onInsertRecommendMsg;
- (id)readFileFromContent:(id)a0;
- (void)onInsertMbRecommendMsg;
- (void)onInsertMbHorizontalScrollMsg;
- (void)onInsertMbRecPicMsg;
- (void)onInsertEcsMbRecMsg;
- (void)insertMockCanvasModelToRecAtIndex:(long long)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)onInsertMbAdPicAd;
- (void)onInsertMbAdVideoAd;
- (void)onDeleteAllRecommendMsg;
- (void)onDeleteAllAdMsg;
- (void)onOpenAdCardQuotaSetting;
- (void)onDeleteCanvasCacheData;
- (void)onReleaseJsEngine;
- (void)onSetAdTestMode;
- (void)onSetAdTestExtInfo;
- (void)onSetAdTestInfo;
- (void)onCallSendAdTestExtAction;
- (void)onCallInjectMbAdJs;
- (void)onClickPageSheetConfirmButton;
- (void)onCallClearAdExpose;
- (void).cxx_destruct;

@end
