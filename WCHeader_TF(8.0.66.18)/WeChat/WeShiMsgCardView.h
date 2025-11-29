@class CAGradientLayer, NSArray, UIImageView, MMWebImageView, RichTextView, MMUILabel;
@protocol WeiShiMsgCardMenuDelegate;

@interface WeShiMsgCardView : MMUIButton {
    MMWebImageView *_coverView;
    RichTextView *_titleView;
    UIImageView *_playIcon;
    MMUILabel *_videoLengthLabel;
    CAGradientLayer *_gradientLayer;
}

@property (nonatomic) unsigned int itemIndex;
@property (retain, nonatomic) NSArray *menuItems;
@property (weak, nonatomic) id<WeiShiMsgCardMenuDelegate> menuDelegage;

- (id)initWithFrameAndData:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 content:(id)a1 coverUrl:(id)a2 timeText:(id)a3;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onForward:(id)a0;
- (void)onFavorite:(id)a0;
- (void)onMore:(id)a0;
- (void)layoutSubviews;
- (void)showMenu:(id)a0;
- (void).cxx_destruct;

@end
