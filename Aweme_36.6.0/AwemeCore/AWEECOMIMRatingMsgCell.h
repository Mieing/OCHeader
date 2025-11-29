@class AWEECOMIMRateServiceOldView, UIView, NSString, AWEECOMIMNewRateResolveView, AWEECOMIMNewRateResolveOldView, AWEECOMIMRatingMsgModel, UILabel, AWEECOMIMRateServiceView_New;

@interface AWEECOMIMRatingMsgCell : AWEECOMIMBaseMsgCell <AWEECOMIMRateServiceViewDelegate>

@property (retain, nonatomic) AWEECOMIMRateServiceView_New *newRateView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEECOMIMNewRateResolveView *resolveView;
@property (retain, nonatomic) AWEECOMIMRateServiceOldView *rateOldView;
@property (retain, nonatomic) AWEECOMIMNewRateResolveOldView *resolveOldView;
@property (retain, nonatomic) AWEECOMIMRatingMsgModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (double)titleLabelWidth;
+ (double)emotionContentWidth;
+ (double)resolveViewWidth;
+ (double)emotionContentOldWidth;
+ (double)resolveViewOldWidth;
+ (double)titleHeightWithText:(id)a0 isNewStyle:(BOOL)a1;
+ (double)titleLabelOldWidth;
+ (id)titleFont;

- (void)didCustomInit;
- (void)rateServiceViewDidHeightUpdate;
- (void)rateServiceViewDidSubmitWithSelectdStar:(id)a0 selectedTagList:(id)a1 curSelectedTag:(id)a2 confirmText:(id)a3 selectedResolve:(id)a4 selectedResolveName:(id)a5;
- (void)rateServiceViewDidUpdateFristResponder:(BOOL)a0;
- (void)evaluatedRequestFailedWithIsSendText:(BOOL)a0;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
