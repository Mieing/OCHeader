@class UIView, NSString, ACCVoiceChangerViewModel, AWEVideoPublishViewModel, NSMutableDictionary, ACCVoiceChangerSelectCollectionView, IESEffectModel, NSIndexPath;
@protocol ACCModuleConfigProtocol;

@interface AWEVoiceChangePannel : UIView <ACCPanelViewProtocol>

@property (retain, nonatomic) ACCVoiceChangerSelectCollectionView *voiceSelectView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL isFectchingEffects;
@property (nonatomic) BOOL indexPathHadRecovered;
@property (retain, nonatomic) id<ACCModuleConfigProtocol> moduleConfig;
@property (retain, nonatomic) UIView *pannelView;
@property (nonatomic) BOOL enableVoiceConversionEffect;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (weak, nonatomic) ACCVoiceChangerViewModel *viewModel;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ backPreviouPageHandler;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) NSMutableDictionary *preProcessCacheDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (void)panelWillShow;
- (void)panelWillDismiss;
- (double)selectViewHeight;
- (void)fetchVoiceListIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1 viewModel:(id)a2;
- (void)pannelDidShow;
- (void)selectNoneItemIfNeeded;
- (void)resetSelectIndex;
- (void)resetToVoiceChangerID:(id)a0;
- (BOOL)hasTimeMachineEffect;
- (double)pannelViewHeight;
- (void)tapToClose:(id)a0;
- (long long)recoverEffectIndex:(id)a0 effects:(id)a1;
- (void)clearVoiceEffectIfNeeded;
- (void).cxx_destruct;
- (void *)identifier;
- (void)dealloc;
- (void)setupUI;
- (id)panelName;

@end
