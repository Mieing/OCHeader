@class UITapGestureRecognizer, AWEIMLinkPreviewCardView;

@interface AWEIMLinkPreviewContentView : UIView

@property (retain, nonatomic) AWEIMLinkPreviewCardView *cardView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
