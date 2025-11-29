@class NSString, IESLiveAnchorInteractiveGameModel;
@protocol IESHYControllerProtocol;

@interface IESLiveGameOpenPlatformIntroductionManager : NSObject <IESHYControllerDelegate, IESLiveGameOpenPlatformIntroductionInterface>

@property (weak, nonatomic) id<IESHYControllerProtocol> lynxContainer;
@property (nonatomic) BOOL isLynxInroductionShowing;
@property (retain, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameModel *gameModel;
@property (nonatomic) BOOL initiativeHidden;
@property (nonatomic) BOOL lynxShareScreenStatusOn;
@property (nonatomic) BOOL lynxExplainCardOn;
@property (copy, nonatomic) id /* block */ cancelLoadGameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hidePanel:(BOOL)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (id)getAppId;
- (BOOL)shouldShowIntroductionWithGameItem:(id)a0;
- (BOOL)shouldShowIntroductionWithGameItem:(id)a0 source:(unsigned long long)a1;
- (void)processIntroductionWithGameItem:(id)a0 completionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)processIntroductionWithGameItem:(id)a0 source:(unsigned long long)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (void)showIntroductionLynxPanel:(id)a0 completionBlock:(id /* block */)a1 cancelCallback:(id /* block */)a2;
- (void)showIntroductionLynxPanel:(id)a0 query:(id)a1 completionBlock:(id /* block */)a2 cancelCallback:(id /* block */)a3;
- (void)updateLynxScreenCastStatusOn:(BOOL)a0 explainCardOn:(BOOL)a1;
- (void)updateDownloadMiniPluginProgress:(double)a0;
- (void)downloadFailWithError:(id)a0;
- (BOOL)introducePanelShowing;
- (BOOL)isSuppoertExplainCardAbility;
- (BOOL)isExplainCardStatusOn;
- (BOOL)isSuppoertShareScreenAbility;
- (BOOL)isShareScreenStatusOn;
- (id)getIntroductionSource:(id)a0;
- (void).cxx_destruct;

@end
