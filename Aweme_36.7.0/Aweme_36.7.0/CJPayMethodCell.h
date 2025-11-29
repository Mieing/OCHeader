@class CJPayStyleCheckMark, CJPayChannelBizModel, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayMethodCell : UITableViewCell <CJPayMethodDataUpdateProtocol, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) UILabel *rightMsgLabel;
@property (retain, nonatomic) CJPayChannelBizModel *model;
@property (retain, nonatomic) MASConstraint *titleLabelCenterYBaseSelfConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseSelfConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

- (void)p_enableCell:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)updateContent:(id)a0;

@end
