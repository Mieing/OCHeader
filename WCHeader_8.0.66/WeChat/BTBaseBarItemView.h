@class UIImageView, UIView, UILabel, MMUILabel;
@protocol BTBarItemViewModelProtocol;

@interface BTBaseBarItemView : MMUIButton

@property (retain, nonatomic) UIView *headImageView;
@property (retain, nonatomic) UIView *subtitleView;
@property (retain, nonatomic) MMUILabel *itemSubTitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *dotImageView;
@property (retain, nonatomic) UIImageView *finderIconView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) id<BTBarItemViewModelProtocol> itemViewModel;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) UIImageView *borderView;
@property (retain, nonatomic) UIView *markWrapperView;
@property (retain, nonatomic) UILabel *markView;

+ (double)iconWidth;

- (id)initWithViewModel:(id)a0;
- (void)updateViewModel:(id)a0;
- (id)accessibilityLabel;
- (void)initSubviews;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initSubtitleView;
- (void)initDotImageView;
- (void)initLineViewIfNeed;
- (void)setHighlighted:(BOOL)a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)layoutSubviews;
- (void)layoutHeadImageView;
- (void)layoutSubtitleView;
- (void)layoutDotImageView;
- (void)layoutLineViewIfNeed;
- (void).cxx_destruct;

@end
