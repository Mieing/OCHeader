@class UIImageView, UITextView, MMUILabel;

@interface ChatBotMiniTaskCell : MiniTaskCollectionBaseCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *extraIconImageView;
@property (retain, nonatomic) UITextView *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *dateLabel;
@property (retain, nonatomic) UIImageView *bizIconView;

- (id)snapShotView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuPopoverFrame;
- (void)setupLayout;
- (void)resetContentViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setViewModel:(id)a0;
- (BOOL)isMsgCell;
- (void)onLongPress:(id)a0;
- (void).cxx_destruct;

@end
