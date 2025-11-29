@class CJPayCoupleLabelView, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayBDPayMainMessageView : UIView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *subDescLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) CJPayCoupleLabelView *voucherLabelView;
@property (nonatomic) BOOL isSubDescLabelForceHidden;
@property (copy, nonatomic) NSString *subDescStr;
@property (retain, nonatomic) UIView *descContentView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) MASConstraint *descLabelRightbaseSelfConstraint;
@property (retain, nonatomic) MASConstraint *descLabelRightbaseImageViewConstraint;
@property (retain, nonatomic) MASConstraint *subDescLabelHeightConstraint;
@property (retain, nonatomic) MASConstraint *descContentBottomBaseVoucherConstraint;
@property (retain, nonatomic) MASConstraint *descContentBottomBaseSubDescConstraint;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ arrowBlock;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (void)updateTitleLabelText:(id)a0;
- (void)updateSubDescLabelText:(id)a0;
- (void)p_arrowImageViewTapped;
- (void)updateDescLabelText:(id)a0;
- (void)updateWithIconUrl:(id)a0;
- (void)updateWithVoucher:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;

@end
