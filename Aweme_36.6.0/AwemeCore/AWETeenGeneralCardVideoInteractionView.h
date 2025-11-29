@class NSString, AWEElementContainer, UIImageView, AWEAwemeModel, AWEGradientView, AWETeenExtraParamModel, UIButton;
@protocol AWETeenGeneralCellInteractionDelegate, AWETeenDisplayViewControllerProtocol;

@interface AWETeenGeneralCardVideoInteractionView : UIView <AWETeenGeneralVideoInteractionViewProtocol>

@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (retain, nonatomic) UIButton *playControlBtn;
@property (retain, nonatomic) UIImageView *loadingIcon;
@property (retain, nonatomic) AWEElementContainer *bottomContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long cardType;
@property (weak, nonatomic) id<AWETeenDisplayViewControllerProtocol> videoDelegate;
@property (weak, nonatomic) id<AWETeenGeneralCellInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (copy, nonatomic) NSString *albumEnterFrom;
@property (nonatomic) long long vcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playLoadingAnimation;
- (void)playBackActionDidChange:(long long)a0;
- (void)configWithModel:(id)a0 cardType:(unsigned long long)a1;
- (void)p_updateWithSpecialStyle;
- (void)p_updateWithNormalStyle;
- (void)p_controlBtnClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)stopLoadingAnimation;

@end
