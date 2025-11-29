@class UIView, NSString, CJPayChannelBizModel, UIImageView, CJPayStyleCheckMark, MASConstraint, CJPayMethodCellTagView, UILabel;

@interface CJPayMethodTableViewCell : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *suggestView;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayChannelBizModel *model;
@property (retain, nonatomic) MASConstraint *seperateViewLeftMarginConstraint;
@property (retain, nonatomic) MASConstraint *bankIconCenterYBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *bankIconCenterYBaseTitleConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelBottomBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelLeftBaseIconImageViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterBaseContentViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

- (void)p_setViewEnable:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
