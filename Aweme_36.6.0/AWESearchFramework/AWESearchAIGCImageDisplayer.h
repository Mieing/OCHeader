@class UIButton, UIImageView, AWESearchAIGCImageContext, AWESearchAIGCImageSelectionContainer;
@protocol AWESearchAIGCImageDisplayerDelegate;

@interface AWESearchAIGCImageDisplayer : UIViewController

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWESearchAIGCImageContext *imageContext;
@property (retain, nonatomic) AWESearchAIGCImageSelectionContainer *selectionContainer;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) unsigned long long popType;
@property (weak, nonatomic) id<AWESearchAIGCImageDisplayerDelegate> delegate;

- (void)backButtonClick;
- (void)setupSelectionContainer;
- (void)displayerPop;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)setupView;
- (void)handleTap:(id)a0;
- (void)updateImageView;

@end
