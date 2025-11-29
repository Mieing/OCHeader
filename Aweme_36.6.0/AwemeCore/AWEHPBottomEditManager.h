@class MMKV, NSMutableDictionary;

@interface AWEHPBottomEditManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *bottomBubbleFlags;
@property (nonatomic) BOOL isBottomEditPanelShowing;

+ (id)sharedInstance;

- (void)addNotifications;
- (id)currentUID;
- (BOOL)isSupportBottomSecondEditWithTabID:(id)a0;
- (BOOL)needShowTopBubbleWithTabID:(id)a0;
- (void)removeTopBubbleFlagWithTabID:(id)a0;
- (BOOL)getBottomSecondTabReplaceable;
- (id)storageKeyWithUid:(id)a0;
- (void)trackReplaceBottomSecondTabSuccess:(BOOL)a0 currentTab:(id)a1 targetTab:(id)a2 error:(id)a3;
- (id)getBottomSecondTabReplaceableListWithError:(id *)a0;
- (void)handleBottomEditPanelDidShow:(id)a0;
- (void)handleBottomEditPanelDidHide:(id)a0;
- (BOOL)changeBottomSecondTabWithTargetTab:(id)a0 currentTab:(id)a1;
- (BOOL)needShowBottomBubbleWithTabID:(id)a0;
- (void)removeBottomBubbleFlagWithTabID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;

@end
