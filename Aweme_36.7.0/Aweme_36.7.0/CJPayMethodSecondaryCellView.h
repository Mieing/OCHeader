@class CJPayMethodCellTagView, CJPayChannelBizModel, CJPayStyleImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayMethodSecondaryCellView : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) CJPayStyleImageView *rightArrowImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *markLabel;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) CJPayChannelBizModel *model;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseSelfConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelLeftBaseSelfConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseSelfConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;
+ (BOOL)p_isDiscountLineBreakWithBizModel:(id)a0;
+ (BOOL)p_isMultiLineWithBizModel:(id)a0;

- (id)p_subTitleContent;
- (void)p_refreshStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
