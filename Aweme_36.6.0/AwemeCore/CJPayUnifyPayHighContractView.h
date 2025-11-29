@class UIView, CJPayDefaultChannelShowConfig, CJPayMultifunctionalAttributeLabel, UIImageView, CJPayCoupleLabelView, CJPayServiceDetailView, CJPayPayAndXShowInfoModel, CJPayButton, UILabel, UIScrollView;

@interface CJPayUnifyPayHighContractView : UIView

@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) UIView *moreGradientView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *titleContentView;
@property (retain, nonatomic) UIView *preTitleContentView;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayCoupleLabelView *voucherView;
@property (retain, nonatomic) CJPayButton *checkBoxBtn;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *descLabel;
@property (retain, nonatomic) CJPayServiceDetailView *serviceDetailView;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (nonatomic) BOOL isNeedShowGradientView;
@property (nonatomic) BOOL isChoose;
@property (copy, nonatomic) id /* block */ chooseBlock;
@property (copy, nonatomic) id /* block */ trackBlock;

- (id)p_getAgreementsWithMemAgreeList:(id)a0 groupId:(id)a1;
- (void)p_gotoProtocolDetailVC:(id)a0;
- (id)p_buildProtocolTextModels;
- (id)p_buildPauseMarkTextModel;
- (void)p_protocolDidClick:(id)a0;
- (void)p_clickCheckIcon;
- (void)p_updateVoucherViewConstraints;
- (void)p_showTitleAndVoucherInOneLine;
- (void)p_showTitleAndVoucherInTowLine;
- (id)p_buildDescTextModels:(id)a0;
- (id)p_buildServiceDetailViewModel;
- (void)updateWithPayAndXInfo:(id)a0 isExpand:(BOOL)a1 showConfig:(id)a2 isChoose:(BOOL)a3;
- (BOOL)p_isEasyRecommendType;
- (void)updateWithPayAndXInfo:(id)a0 isExpand:(BOOL)a1;
- (id)p_configCoupleLabelContents;
- (void)p_updateBodyView;
- (void)p_configCheckBox;
- (void)p_refreshHeightViewWithIsExpand:(BOOL)a0;
- (void)p_changeCheckBoxStatus:(BOOL)a0;
- (void)p_changeDescLabelStatus:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
