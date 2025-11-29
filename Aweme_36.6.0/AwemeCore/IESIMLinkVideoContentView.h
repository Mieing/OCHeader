@class UITapGestureRecognizer, IESIMLinkVideoCoverView;

@interface IESIMLinkVideoContentView : UIView

@property (retain, nonatomic) IESIMLinkVideoCoverView *coverView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
