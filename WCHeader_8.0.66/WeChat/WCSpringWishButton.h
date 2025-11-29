@class UIImageView, MMUILabel, WCSpringWishButtonModel;

@interface WCSpringWishButton : MMUIButton

@property (nonatomic) BOOL isSpringWished;
@property (retain, nonatomic) UIImageView *springImageView;
@property (retain, nonatomic) MMUILabel *springWishLabel;
@property (retain, nonatomic) MMUILabel *springWishDeliveredLabel;
@property (retain, nonatomic) WCSpringWishButtonModel *viewModel;

+ (struct CGSize { double x0; double x1; })getSpringWishBtnSize:(double)a0;

- (id)initWithModel:(id)a0;
- (void)initViews;
- (void)initSpringImageView;
- (void)initSpringWishLabel;
- (void)initSpringWishDeliveredLabel;
- (id)getSpringTitleText;
- (id)getSpringTitleTextColor;
- (void)touchUp:(id)a0;
- (void)replyNewYearGreeting;
- (void)layoutSubviews;
- (void)unWishAnimateToWished;
- (void)configSpringWishDataReport;
- (id)genSpringWishReportDict;
- (void).cxx_destruct;

@end
