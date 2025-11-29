@class WCFinderMention, UIImageView, UIView, MMUIButton, MMUILabel;
@protocol MMLiveSystemMentionCellDelegate;

@interface MMLiveSystemMentionCell : UITableViewCell

@property (retain, nonatomic) WCFinderMention *mention;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *foldedShadowView;
@property (retain, nonatomic) MMUILabel *mentionTitleLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<MMLiveSystemMentionCellDelegate> delegate;

+ (id)getBgColor;
+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)setupEvent;
- (void)layoutSubviews;
- (void)layoutShadow;
- (void)layoutUI;
- (void)updateWithMention:(id)a0;
- (void)updateIfFolded:(BOOL)a0;
- (void)onClickCloseBtn;
- (void)onMentionClick;
- (void).cxx_destruct;

@end
