@class NSString, NSMutableDictionary;
@protocol AWEIMMessageVisibleCellInterface, AWEIMPageEnvironmentMonitorInterface;

@interface AWEIMMessageListBulletTrackerComponent : AWEIMComponentBase <AWEIMMessageTableViewAction, AWEIMMessageListBulletTrackerInterface>

@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (weak, nonatomic) id<AWEIMPageEnvironmentMonitorInterface> monitorService;
@property (retain, nonatomic) NSMutableDictionary *effectMemoryCardKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)bulletTrackInfo;
- (id)p_trackMemorySourceInfo;
- (id)p_bulletTrackInfo;
- (void)p_initialMemoryBulletInfo;
- (void)p_recordBulletInfoWithSchema:(id)a0;
- (void)p_removeBulletInfoWithSchema:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
