@class IESECLiveApi, NSString, IESECLiveAnchorFlashSaleCreateView, IESECLiveAnchorFlashSaleViewModel, UIView, NSDictionary;
@protocol IESECLivePluginLayoutView;

@interface IESECLiveAnchorFlashSaleWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber, IESECLiveAnchorFlashSaleService, UITextViewDelegate, IESECLiveAnchorAlertService>

@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveAnchorFlashSaleViewModel *flashSaleViewModel;
@property (retain, nonatomic) UIView<IESECLivePluginLayoutView> *flashSaleEntranceView;
@property (weak, nonatomic) IESECLiveAnchorFlashSaleCreateView *createView;
@property (copy, nonatomic) NSDictionary *lastProperties;
@property (copy, nonatomic) NSString *lastCategoryName;
@property (copy, nonatomic) NSString *lastCategoryCids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shopID;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)showFlashCheckAlertWithModel:(id)a0;
- (void)clickFlashSaleEntrance:(id)a0 userName:(id)a1;
- (BOOL)isFlashSaleAuth;
- (BOOL)isFlashSaleEntranceOpen;
- (BOOL)canShowFlashSaleEntrance;
- (void)showFlashSaleEntranceIfNeeded;
- (void)hideFlashSaleEntrance;
- (long long)flashCreateViewHeight;
- (void)setFlashSaleEntranceOpenStatus:(BOOL)a0;
- (void)fetchFlashSaleAuthWithCompletion:(id /* block */)a0;
- (void)refreshFlashSaleCreateViewSelectedCategoryName:(id)a0 selectedCategoryCids:(id)a1;
- (BOOL)isFlashSaleEntranceShow;
- (void)p_setupFlashSaleViewModel;
- (void)showCreateViewWithImage:(id)a0 userID:(id)a1 lastCategoryName:(id)a2 lastCategoryCids:(id)a3 clickTime:(double)a4 lastProperties:(id)a5 userName:(id)a6 skuAuth:(BOOL)a7 lastSKUState:(id)a8;
- (void)p_showFlashSaleEntrance;
- (void)updateLiveApi;
- (id)createFlashSaleView;
- (void)showFlashSaleEntranceBubbleGuideIfNeeded;
- (double)createViewHeight;
- (void)configCreateViewTitle:(id)a0;
- (void)titleRightButtonTapped;
- (void)openSchemaWithoutPause:(id)a0;
- (id)generateFlashAuthCheckContent:(id)a0;
- (void)messageReceived_IESECLiveCommonMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)messageReceived:(id)a0;

@end
