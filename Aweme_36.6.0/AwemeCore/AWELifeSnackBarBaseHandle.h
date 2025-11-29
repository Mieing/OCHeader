@class NSMutableDictionary, NSTimer, AWENearbyPageContext, NSString;

@interface AWELifeSnackBarBaseHandle : NSObject <AWELifeSnackBarHandleProtocol>

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (nonatomic) long long actionStatus;
@property (retain, nonatomic) NSTimer *enterTabTimer;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSMutableDictionary *inTabActionTimesRecord;
@property (retain, nonatomic) NSMutableDictionary *inTabActionSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordAction:(long long)a0;
- (id)initWithPageType:(long long)a0;
- (void)handleLifePinTop;
- (void)clearLifePinTopDataWhenLeaveTab;
- (void)updateEnable:(BOOL)a0;
- (BOOL)inCurrentTab;
- (BOOL)inCurrentTabAndTopVc;
- (void)handleVideoPlayFinish:(id)a0;
- (void)handleLifeAnchorClick:(id)a0;
- (long long)sceneStringToActionType:(id)a0;
- (void)recordAction:(long long)a0 aweme:(id)a1;
- (id)trackActionString:(long long)a0;
- (id)checkActionCanShowBarWithAction:(long long)a0 aweme:(id)a1;
- (void)showLifeSnackBarToast:(id)a0;
- (void)transformActionStatus:(long long)a0 aweme:(id)a1;
- (void)triggerTrackWithActionType:(long long)a0;
- (id)tabPinTopShowImp;
- (void)showNearbyPinTopForDuration;
- (void)tryShowSnackBarWithAction:(long long)a0 aweme:(id)a1 withResult:(id /* block */)a2;
- (void)handleClickTransformerWithParams:(id)a0;
- (void)handleLynxMakeDealInLife;
- (void)clearnAction:(long long)a0;
- (void).cxx_destruct;

@end
