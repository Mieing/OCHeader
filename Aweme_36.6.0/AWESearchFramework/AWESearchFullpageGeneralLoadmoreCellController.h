@class UIButton, NSString, UIView;
@protocol CachalotRenderPipelineComponentViewModel, AWEModernFeedCellContext, AWESearchFullpageGeneralLoadmoreCellDelegate;

@interface AWESearchFullpageGeneralLoadmoreCellController : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (weak, nonatomic) id<AWESearchFullpageGeneralLoadmoreCellDelegate> delegate;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) UIView *backgroudView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)generalContext;
- (id)scanContext;
- (void)clickLoadMore;
- (id)componentContextControllerProxy;
- (BOOL)isScan;
- (id)componentContextEnterFrom;
- (id)componentContextEnterMethod;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
