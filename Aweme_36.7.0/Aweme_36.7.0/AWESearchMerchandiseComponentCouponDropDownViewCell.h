@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSString, UIImageView, NSTimer, UILabel, UIView, AWEDoubleColumnSearchMerchandiseFilterManager;

@interface AWESearchMerchandiseComponentCouponDropDownViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIImageView *leftBackGroundImageView;
@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UILabel *leftContainerLabel;
@property (retain, nonatomic) UILabel *priceLable;
@property (retain, nonatomic) UILabel *unitLable;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIImageView *rightBackGroundImageView;
@property (retain, nonatomic) UILabel *upTitleLable;
@property (retain, nonatomic) UILabel *downTitleLable;
@property (retain, nonatomic) UIView *countDownView;
@property (retain, nonatomic) UIView *countDownContainerView;
@property (retain, nonatomic) UILabel *countDownSpecialLabel;
@property (retain, nonatomic) UILabel *hourLabel;
@property (retain, nonatomic) UILabel *minuteLeftSemicolonLabel;
@property (retain, nonatomic) UILabel *minuteLabel;
@property (retain, nonatomic) UILabel *secondLeftSemicolonLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UILabel *countDownTailLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long countDownhour;
@property (retain, nonatomic) NSString *hour;
@property (retain, nonatomic) NSString *minutes;
@property (retain, nonatomic) NSString *second;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (nonatomic) BOOL isShowCountDown;

+ (double)calculatingWidthWithString:(id)a0 textFont:(id)a1;
+ (id)identifier;

- (void)beginTimer;
- (long long)getCountdownInterVal;
- (void)configWithComponentModel:(id)a0 filterManager:(id)a1 isSelect:(BOOL)a2;
- (void)showExpiredTimeLabel;
- (void)showOver24hTimeLabel;
- (void)updateUIDisplayStatusWithModel:(id)a0 isSelect:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTimer;
- (void)layoutSubviews;
- (void)updateText;
- (void)setupUI;

@end
