@class UILabel, UIImageView;

@interface AWEPushSearchAnchorItemView : UIView

@property (nonatomic) BOOL isBgWhite;
@property (nonatomic) double itemWidth;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UILabel *itemLabel;
@property (retain, nonatomic) UIImageView *backIcon;

- (void)updateUITheme:(BOOL)a0;
- (id)getBackIconImageWithIsBGColorWhite:(BOOL)a0;
- (id)initWithModel:(id)a0 maxWidth:(double)a1 isBGWhite:(BOOL)a2;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
