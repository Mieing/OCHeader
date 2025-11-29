@class IESLiveGameOpenPlatformAnchorStore, IESLiveGameOpenPlatformAnchorAppManager, NSString;
@protocol IESLiveGameOpenPlatformIntroductionInterface;

@interface IESLiveGameOpenPlatformAnchorFragment : IESLiveRoomComponent <IESLiveGameOpenPlatformAnchorRouter, IESLiveOpenPlatformDebugRouter>

@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorStore *store;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformIntroductionInterface> introductionManager;
@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorAppManager *appManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)loadWithGameItem:(id)a0 source:(unsigned long long)a1 launchResultBlock:(id /* block */)a2;
- (void)loadWithGameItemFromIntroductionPage:(id)a0 source:(unsigned long long)a1 castScreenOn:(BOOL)a2 explainCardOn:(BOOL)a3 params:(id)a4;
- (void)debugLoadWithSchema:(id)a0;
- (id)_mockGameItemWithSchema:(id)a0;
- (BOOL)isScoreGameSchema:(id)a0;
- (void).cxx_destruct;

@end
