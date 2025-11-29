@class CJPayMethodCellTagView, CJPayChannelBizModel, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayMethodAddCardCellView : CJPayMethodTableViewWithArrowCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *addIconImageView;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) CJPayMethodCellTagView *rightDiscountView;
@property (retain, nonatomic) CJPayChannelBizModel *model;
@property (readonly, nonatomic) UIView *seperateView;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseSelfConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseSelfConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelLeftBaseIconImageConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

- (id)p_themeFontOfSize:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
