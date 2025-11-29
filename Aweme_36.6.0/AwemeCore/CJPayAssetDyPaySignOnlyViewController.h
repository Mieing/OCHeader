@class CJPayDyPayProcessConfigModel, CJPayAssetDyPaySignOnlyViewManager, UIImageView, NSString, CJPayDyPaySignInfoQueryResponse;

@interface CJPayAssetDyPaySignOnlyViewController : CJPayFullPageBaseViewController <CJPayAssetDyPaySignOnlyViewManagerProtocol>

@property (retain, nonatomic) CJPayDyPayProcessConfigModel *configModel;
@property (retain, nonatomic) CJPayDyPaySignInfoQueryResponse *response;
@property (retain, nonatomic) CJPayAssetDyPaySignOnlyViewManager *viewManager;
@property (retain, nonatomic) UIImageView *navIconImgView;
@property (retain, nonatomic) UIImageView *bcgImgView;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) id /* block */ backAndCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cjNeedAnimation;
- (void)p_setupConstraints;
- (id)homePageVC;
- (void)p_tryRemovePadTransitionBGImageView;
- (void)p_backAndCompletionWithErrorCode:(long long)a0 errorMsg:(id)a1;
- (id)initWithConfigModel:(id)a0 response:(id)a1;
- (void)presentVC:(id)a0 useMask:(BOOL)a1;
- (void)backAndCompletionWithErrorCode:(long long)a0 errorMsg:(id)a1;
- (double)headerViewTopContentViewMargin;
- (BOOL)isDetailViewCanScroll;
- (BOOL)isHiddenWaterMarkView;
- (void)p_pushVC:(id)a0;
- (void)closeSignProcessWithCompletion:(id /* block */)a0;
- (void)p_setupUI;
- (void)close;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
