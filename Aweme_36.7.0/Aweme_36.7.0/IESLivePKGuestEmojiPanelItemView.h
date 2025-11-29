@class IESLivePKGuestEmojiPanelViewItem, UIImageView, UILabel, UIView;

@interface IESLivePKGuestEmojiPanelItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) IESLivePKGuestEmojiPanelViewItem *item;
@property (nonatomic) BOOL isGameMode;

- (void)tapGestureActions:(id)a0;
- (void)updateMasConstraints;
- (void)p_updateTagWithText:(id)a0;
- (void)renderItem:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
