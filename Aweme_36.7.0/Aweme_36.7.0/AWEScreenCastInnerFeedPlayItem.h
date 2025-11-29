@class UIImageView, UILabel;

@interface AWEScreenCastInnerFeedPlayItem : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ clickAction;

- (void)updateImage:(id)a0;
- (id)initWithIsAnchor:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)updateTitle:(id)a0;

@end
