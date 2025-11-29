@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSString, NSTimer, UILabel, UIView;

@interface AWESearchPOICouponComponentCell : AWESearchPOIDefaultComponentCell

@property (retain, nonatomic) UILabel *subTextLabel;
@property (retain, nonatomic) UIView *countDownView;
@property (retain, nonatomic) UIView *countDownContainerView;
@property (retain, nonatomic) UILabel *countDownSpecialLabel;
@property (retain, nonatomic) UILabel *hourLabel;
@property (retain, nonatomic) UILabel *minuteLeftSemicolonLabel;
@property (retain, nonatomic) UILabel *minuteLabel;
@property (retain, nonatomic) UILabel *secondLeftSemicolonLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long countDownInterval;
@property (retain, nonatomic) NSString *hour;
@property (retain, nonatomic) NSString *minutes;
@property (retain, nonatomic) NSString *second;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (nonatomic) BOOL isShowCountDown;

+ (id)textFontWithModel:(id)a0 filterManager:(id)a1;
+ (double)titleWidthWithModel:(id)a0 filterManager:(id)a1;
+ (BOOL)isSelectWithModel:(id)a0 filterManager:(id)a1;
+ (double)widthWithComponentModel:(id)a0 filterManager:(id)a1;
+ (double)calculatingWidthWithString:(id)a0 textFont:(id)a1;
+ (long long)getFontClassWithSize:(long long)a0;
+ (id)selectingTextFontWithModel:(id)a0 filterManager:(id)a1;
+ (double)calculateTimeWidthWithModel:(id)a0;
+ (long long)getCountdownInterVal:(id)a0;
+ (id)identifier;
+ (BOOL)isExpired:(id)a0;

- (void)configUI;
- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)beginTimer;
- (void)updateLabelWhenOver24h;
- (void)updateWhenExpired;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTimer;
- (void)layoutSubviews;
- (void)updateText;

@end
