@class UIImageView, UILabel;

@interface AWEListenFeedPlayItem : UIView

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickAction;

- (void)updateImage:(id)a0;
- (void)updateSpeed:(double)a0;
- (void)configTitleAndImage;
- (id)initWithType:(unsigned long long)a0 isAnchor:(BOOL)a1;
- (void).cxx_destruct;
- (void)setup;
- (void)updateTitle:(id)a0;

@end
