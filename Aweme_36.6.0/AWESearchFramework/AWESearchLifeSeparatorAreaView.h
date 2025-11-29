@class NSString, UIView;

@interface AWESearchLifeSeparatorAreaView : UIView

@property (retain, nonatomic) UIView *separatorLineView;
@property (nonatomic) double lineHeight;
@property (copy, nonatomic) NSString *areaLightColorString;
@property (copy, nonatomic) NSString *areaDarkColorString;
@property (copy, nonatomic) NSString *lineLightColorString;
@property (copy, nonatomic) NSString *lineDarkColorString;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;

- (void)setDividerConfigWith:(id)a0;
- (void)dividerConfigDataDealWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
