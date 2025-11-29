@class CJPayPayAndXShowInfoModel, UIImageView, CJPayMultifunctionalAttributeLabel, UIView, CJPayButton, CJPayDefaultChannelShowConfig;

@interface CJPayUnifyPayWeakContractView : UIView

@property (retain, nonatomic) UIView *mainTitleView;
@property (retain, nonatomic) UIImageView *easyRecommendImageView;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *recommendTitle;
@property (retain, nonatomic) UIView *moreGradientView;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *recommendSubTitle;
@property (retain, nonatomic) CJPayButton *markBtn;
@property (retain, nonatomic) CJPayButton *checkBoxBtn;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (copy, nonatomic) id /* block */ chooseBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (nonatomic) BOOL isChoose;

- (void)p_refreshUI;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (id)p_getAgreementsWithMemAgreeList:(id)a0 groupId:(id)a1;
- (void)p_gotoProtocolDetailVC:(id)a0;
- (id)p_buildRecommendTitleAttributeItems;
- (id)p_buildRecommendSubTitleAttributeItems;
- (BOOL)p_checkTitleNeedClip;
- (id)p_buildProtocolTextModels;
- (void)p_protocolDidClick:(id)a0;
- (void)p_clickCheckIcon;
- (void)p_clickMarkIcon;
- (void)updateBGColor:(id)a0;
- (void)p_showSignPayDetailHalfPage:(id)a0 isChoose:(BOOL)a1;
- (void)p_changeCheckIconStatus:(BOOL)a0;
- (void)updateWithPayAndXShowInfo:(id)a0 showConfig:(id)a1 isChoose:(BOOL)a2 chooseBlock:(id /* block */)a3 trackBlock:(id /* block */)a4;
- (void)p_changeCheckBoxStatus:(BOOL)a0;
- (BOOL)p_isHighRecommendType;
- (id)p_buildSeparatorMarkTextModel:(id)a0 fontSize:(double)a1;
- (id)p_buildHighRecommendTitle;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
