@class AWEGDSkeletonView, DitoPageContext, NSString, AWEGDSkeletonFooterView;
@protocol DitoExtensionContainerProtocol;

@interface AWEGDSkeletonExtension : NSObject <AWEGDSkeletonFooterViewDelegate, DitoExtensionProtocol, AWEPOICubeViewDelegate, DitoLynxExtensionDelegateProtocol, DitoHalfContainerDelegateProtocol>

@property (weak, nonatomic) AWEGDSkeletonView *skeletonView;
@property (weak, nonatomic) AWEGDSkeletonFooterView *footerView;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
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
