@class UIImageView, NSTimer, AWESearchMerchandiseCommonInfo, UILabel, UIView;

@interface AWESearchGoodsRecommendView : UIView

@property (retain, nonatomic) UIView *bgColorView;
@property (nonatomic) BOOL needUnifiedUIConfig;
@property (retain, nonatomic) AWESearchMerchandiseCommonInfo *recommend;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UIImageView *recommendIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) NSTimer *countDownTimer;

+ (double)recommendHeightNeedUnifiedUIConfig:(BOOL)a0;

- (void)beginTimer;
- (long long)getCountdownInterVal;
- (void)configBGColor;
- (double)recommendMaxWidthWithContainerWidth:(double)a0;
- (BOOL)hasBgConfig;
- (BOOL)needEllipsis;
- (void)countDownAction;
- (void)setRecommend:(id)a0 needUnifiedUIConfig:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTimer;
- (void)layoutSubviews;
- (void)updateText;

@end
