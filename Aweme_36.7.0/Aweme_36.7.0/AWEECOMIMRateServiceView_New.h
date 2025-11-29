@class AWEECOMIMRateEmotionView_New, AWEECOMIMRateServiceModel;
@protocol AWEECOMIMRateServiceViewDelegate;

@interface AWEECOMIMRateServiceView_New : UIView

@property (retain, nonatomic) AWEECOMIMRateServiceModel *model;
@property (retain, nonatomic) AWEECOMIMRateEmotionView_New *emotionView;
@property (weak, nonatomic) id<AWEECOMIMRateServiceViewDelegate> delegate;

+ (BOOL)checkIsIn24Hours:(id)a0;
+ (double)getCurrentHeightWithModel:(id)a0 maxWidth:(double)a1;
+ (double)tagInputViewPadding;
+ (double)bottomPadding;

- (void)updateRateServiceViewWithModel:(id)a0 maxWidth:(double)a1;
- (double)currentViewHeightWithModel:(id)a0;
- (void).cxx_destruct;
- (void)registerNotifications;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
