@class NSString;

@interface IESIMMessageTabUnreadCountConsistencyCheckerPlugin : NSObject <IESIMMessageTabUnreadCountConsistencyCheckerPluginInterface>

@property BOOL hasLoadedAll;
@property long long totalCount;
@property BOOL hasFetchedOfficialChats;
@property long long notBrowsedCellCount;
@property long long localConvUnreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)triggerBadgeConsistencyCheck;
- (void)updateWithOldUnreadCount:(long long)a0 newUnreadCount:(long long)a1;
- (void)updateLocalConvUnreadCount:(long long)a0;
- (void)updateNotBrowsedCellCount:(long long)a0;
- (void)updateHasFetchedOfficialChats:(BOOL)a0;
- (id)init;
- (id)getData;

@end
