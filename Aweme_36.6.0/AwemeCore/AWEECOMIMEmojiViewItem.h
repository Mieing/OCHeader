@class UIImageView, AWEECOMIMEmojiModel;

@interface AWEECOMIMEmojiViewItem : UICollectionViewCell

@property (retain, nonatomic) UIImageView *emojiView;
@property (retain, nonatomic) AWEECOMIMEmojiModel *model;
@property (copy, nonatomic) id /* block */ onClick;

- (void)reloadItemWithEmojiModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
