@class UIImageView;
@protocol IESECStoreScrollToTopViewDelegate;

@interface IESECStoreScrollToTopView : UIView

@property (nonatomic) BOOL scrollToTopShown;
@property (nonatomic) BOOL scrollToTopAnimating;
@property (weak, nonatomic) id<IESECStoreScrollToTopViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *scrollToTopView;

- (void)hideScrollToTopAnimated;
- (void)showScrollToTopAnimated;
- (void)didTapScrollToTopView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
