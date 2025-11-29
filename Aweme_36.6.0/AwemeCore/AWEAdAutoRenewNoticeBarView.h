@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWEAdAutoRenewNoticeBarView : UIView <AWEAdAutoRenewNoticeBarView>

@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *subIconImageView;
@property (retain, nonatomic) UILabel *subTipsLabel;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isBigFontModeOn;
- (BOOL)isNewBigFont;
- (void)clickHandle;
- (void)setupArrowImageView:(id)a0;
- (void)setupWeakenedStyle;
- (void)resetAutoRenewSubViews;
- (void)updateViewWithAutoRenewModel:(id)a0;
- (void)updateViewWithLotteryHintModel:(id)a0;
- (void)updateSearchOutFlowRiskBarViewWithModel:(id)a0;
- (void)showRiskInfoWithModel:(id)a0;
- (void)updateProfileAdTipsBarWithModel:(id)a0;
- (void)showNoticeText:(id)a0;
- (void)updateGuaranteeInfoWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
