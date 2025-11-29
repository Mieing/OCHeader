@class UIView, NSString, NSArray, IESECImagePreviewInteractiveTransition, CAGradientLayer, UIViewController, UIPanGestureRecognizer, IESECCommentMediaInteractorView, IESECGoodsCommentContext;
@protocol IESECCommentMediaDelegate;

@interface IESECCommentMediaViewController : UIViewController <IESECMediaPreviewDelegate, IESECImagePreviewTransitionContextProvider, IESECImagePreviewTargetProtocol, IESECCommentMediaInteractorViewDelegate>

@property (copy, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) IESECCommentMediaInteractorView *interactorView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (weak, nonatomic) UIViewController *mediaVC;
@property (nonatomic) BOOL shouldHideMultiplyButton;
@property (retain, nonatomic) IESECImagePreviewInteractiveTransition *transition;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (weak, nonatomic) id<IESECCommentMediaDelegate> delegate;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (retain, nonatomic) UIView *animateTargetView;
@property (weak, nonatomic) UIPanGestureRecognizer *panToDismiss;
@property (nonatomic) double imageContainerAlpha;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mediaPreviewController:(id)a0 didDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 didSwipeToIndex:(long long)a1 previousIndex:(long long)a2;
- (void)progressIsSliding:(BOOL)a0;
- (void)pushMultypleMedias:(id)a0;
- (void)dismiss:(long long)a0 isCurrentVideoTab:(BOOL)a1;
- (void)textViewFoldingButtonStateChanged:(BOOL)a0 media:(id)a1;
- (void)setupMediaView:(id)a0 mediaIndex:(long long)a1;
- (id)mediaArrayWithModels:(id)a0;
- (void)setupNewImageGradientLayer:(id)a0;
- (void)setupImageGradientLayer;
- (void)setupInteractorView:(id)a0 mediaIndex:(long long)a1;
- (void)showMultipleMediaButtonTrack;
- (id)commentModuleWithDataType:(long long)a0;
- (id)targetViewForImagePreviewController:(id)a0 atIndex:(long long)a1;
- (id)initWithMediaModels:(id)a0 mediaIndex:(long long)a1 context:(id)a2 shouldHideMultiplyButton:(BOOL)a3;
- (void)updateMediaModels:(id)a0;
- (void)updateInteractorViewData:(id)a0 mediaIndex:(long long)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)currentImageView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
