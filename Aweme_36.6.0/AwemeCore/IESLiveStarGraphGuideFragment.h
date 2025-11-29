@class IESLiveStarGraphGuideStore, IESLiveGuideToolBarItem, NSString;

@interface IESLiveStarGraphGuideFragment : IESLiveGuideComponent <IESLiveScreencastLiveModelStarGraphInterface, IESLiveGuideActions, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) IESLiveStarGraphGuideStore *store;
@property (retain, nonatomic) IESLiveGuideToolBarItem *guideToolBarItem;
@property (nonatomic) BOOL selectedStarTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)starGraphGuideEnable;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (id)trackClickParams:(id)a0;
- (id)stringfromLiveType:(unsigned long long)a0;
- (BOOL)checkNeedShowStarGraphGuideDialog;
- (void)setStarGraphSourceParamsForGuideModel:(id)a0;
- (void)bindXLiveObserveActions;
- (id)trackShowParams;
- (void)showStarGraphGuideAlertWithOpenInfo:(id)a0;
- (void)showBubbleViewWithDelay:(long long)a0 title:(id)a1;
- (void)openWebPageWithUrl:(id)a0;
- (void).cxx_destruct;

@end
