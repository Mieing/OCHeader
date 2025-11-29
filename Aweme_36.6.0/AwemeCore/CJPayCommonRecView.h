@class CJPayStandardSwitch, CJPayDefaultChannelShowConfig, UIImageView, CJPayButton, UIView, CJPayMultifunctionalAttributeLabel, CJPayCommonRecInfo;

@interface CJPayCommonRecView : UIView

@property (retain, nonatomic) UIImageView *easyRecommendImageView;
@property (retain, nonatomic) UIView *mainTitleView;
@property (retain, nonatomic) UIView *moreGradientView;
@property (retain, nonatomic) CJPayButton *markBtn;
@property (retain, nonatomic) CJPayStandardSwitch *switchView;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *recommendTitle;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *recommendSubTitle;
@property (retain, nonatomic) CJPayCommonRecInfo *recInfo;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *curShowConfig;
@property (copy, nonatomic) id /* block */ chooseBlock;
@property (nonatomic) BOOL isChoose;

- (id)p_getAgreementsWithMemAgreeList:(id)a0 groupId:(id)a1;
- (void)p_gotoProtocolDetailVC:(id)a0;
- (id)protoInfoArray;
- (id)protoNameDict;
- (BOOL)p_shouldShowSubTitle;
- (void)p_updateCheckIconStatus:(BOOL)a0;
- (id)p_buildRecommendTitleAttributeItems;
- (id)p_buildRecommendSubTitleAttributeItems;
- (BOOL)p_checkTitleNeedClip;
- (id)p_buildProtocolTextModels;
- (id)p_buildPauseMarkTextModel;
- (void)p_protocolDidClick:(id)a0;
- (void)p_clickCheckIcon;
- (void)p_clickMarkIcon;
- (void)updateBGColor:(id)a0;
- (void)updateUIWithModel:(id)a0 showConfig:(id)a1 isChoose:(BOOL)a2 chooseBlock:(id /* block */)a3;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
