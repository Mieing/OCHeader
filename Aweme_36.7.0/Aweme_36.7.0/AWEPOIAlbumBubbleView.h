@class UIImageView, UILabel;

@interface AWEPOIAlbumBubbleView : UIView

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *contentView;

+ (void)handleBubbleDisplayed;
+ (BOOL)hasBeenShown;

- (void)bubbleEaseOut;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
