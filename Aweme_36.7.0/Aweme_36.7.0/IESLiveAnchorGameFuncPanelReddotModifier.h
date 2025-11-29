@class NSString, NSMutableDictionary;

@interface IESLiveAnchorGameFuncPanelReddotModifier : NSObject <IESLiveAnchorGameFuncPanelReddotModifier>

@property (retain, nonatomic) NSMutableDictionary *stashRedCountDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)processRedDotWhenStartAnchorInteractiveGame:(id)a0;
- (void)processRedDotWithAnchorInteractiveGameList:(id)a0;
- (void)processRedDotUpdateWithGameId:(long long)a0 redDotCount:(long long)a1;
- (void)processRedDotRestoreIfNeeded;
- (void)processRedDotWhenDisplayAnchorInteractive:(id)a0;
- (void).cxx_destruct;

@end
