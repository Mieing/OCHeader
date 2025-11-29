@class UIColor, UIFont;

@interface IESLiveInteractFeedbackStyleConfig : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *categoryTitleColor;
@property (retain, nonatomic) UIFont *categoryTitleFont;
@property (nonatomic) double categoryTitleHeight;
@property (retain, nonatomic) UIColor *issueLabelNormalBackgroundColor;
@property (retain, nonatomic) UIColor *issueLabelSelectedBackgroundColor;
@property (retain, nonatomic) UIColor *issueLabelNormalTextColor;
@property (retain, nonatomic) UIColor *issueLabelSelectedTextColor;
@property (retain, nonatomic) UIColor *issueLabelNormalBorderColor;
@property (nonatomic) double issueLabelNormalBorderWidth;
@property (retain, nonatomic) UIColor *issueLabelSelectedBorderColor;
@property (retain, nonatomic) UIColor *feedbackDetailBackgroundColor;
@property (retain, nonatomic) UIColor *feedbackDetailTitleColor;
@property (retain, nonatomic) UIColor *feedbackDetailTextViewBackgroundColor;
@property (retain, nonatomic) UIColor *feedbackDetailTextViewBorderColor;
@property (retain, nonatomic) UIColor *feedbackDetailTextViewTextColor;
@property (retain, nonatomic) UIColor *feedbackDetailTextViewPlaceholderColor;
@property (nonatomic) long long scaleRatio;

- (void)p_setupWithTheme:(unsigned long long)a0;
- (id)initWithTheme:(unsigned long long)a0 scaleRatio:(long long)a1;
- (void).cxx_destruct;

@end
