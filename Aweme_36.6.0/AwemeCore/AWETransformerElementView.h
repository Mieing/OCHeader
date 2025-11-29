@protocol AWETransformerElementViewDelegate;

@interface AWETransformerElementView : UIView

@property (weak, nonatomic) id<AWETransformerElementViewDelegate> elementViewDelegate;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
