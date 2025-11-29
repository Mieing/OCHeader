@class WCAppAuthTableViewCellData, UIImageView, UIView, MMUILabel;
@protocol WCAppAuthTableViewCellDelegate;

@interface WCAppAuthTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMUILabel *appNameLabel;
@property (retain, nonatomic) MMUILabel *appTypeLabel;
@property (retain, nonatomic) UIView *appTypeBgView;
@property (retain, nonatomic) MMUILabel *scopeLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) WCAppAuthTableViewCellData *cellData;
@property (weak, nonatomic) id<WCAppAuthTableViewCellDelegate> delegate;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)onMultiMenuAppear;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
