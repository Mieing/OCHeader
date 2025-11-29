@class NSString, IESLLGDSkeletonView, LLDitoPageContext, IESLLGDSkeletonFooterView;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLGDSkeletonExtension : NSObject <IESLLGDSkeletonFooterViewDelegate, LLDitoExtensionProtocol, LLCubeViewDelegate, LLDitoLynxExtensionDelegateProtocol, LLDitoHalfContainerDelegateProtocol>

@property (weak, nonatomic) IESLLGDSkeletonView *skeletonView;
@property (weak, nonatomic) IESLLGDSkeletonFooterView *footerView;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (BOOL)isJumpToMiddlePage:(id)a0;
- (void)ditoExtension:(id)a0 cubeView:(id)a1 didLoadSuccessWithUrl:(id)a2;
- (BOOL)isBodyStartLoad;
- (BOOL)isShowSkeleton;
- (void)setupSkeletonUI;
- (void)checkHitImageCache;
- (void)sendLogWithEvent:(id)a0 params:(id)a1;
- (BOOL)removeSkeletonUI;
- (void)skeletonFooterView:(id)a0 onClickConfirmBtn:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didLayout;
- (id)getProductID;

@end
