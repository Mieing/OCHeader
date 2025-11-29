@class CJPayPayAndXShowInfoModel, UIImageView, CJPayMultifunctionalAttributeLabel, UIView, CJPayButton, CJPayDefaultChannelShowConfig;

@interface CJPayDyPayRecommendBottomView : UIView

@property (retain, nonatomic) UIView *mainTitleView;
@property (retain, nonatomic) UIImageView *easyRecommendImageView;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *recommendTitle;
@property (retain, nonatomic) UIView *moreGradientView;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *recommendSubTitle;
@property (retain, nonatomic) CJPayButton *markBtn;
@property (retain, nonatomic) CJPayButton *checkBtn;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (copy, nonatomic) id /* block */ chooseBlock;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (copy, nonatomic) id /* block */ markIconClickBlock;
@property (nonatomic) BOOL isChoose;

- (id)p_buildRecommendTitleAttributeItems;
- (id)p_buildRecommendSubTitleAttributeItems;
- (BOOL)p_checkTitleNeedClip;
- (id)p_buildProtocolTextModels;
- (id)p_buildPauseMarkTextModel;
- (void)p_protocolDidClick:(id)a0;
- (void)p_clickCheckIcon;
- (void)p_clickMarkIcon;
- (void)updateWithPayAndXShowInfo:(id)a0 showConfig:(id)a1 chooseStatus:(BOOL)a2 chooseBlock:(id /* block */)a3 protocolClickBlock:(id /* block */)a4 markIconClickBlock:(id /* block */)a5;
- (void)p_changeCheckIconStatus:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
