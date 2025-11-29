@class MyWCDB;

@interface WCMomentsFinderShareManager : NSObject <WCFacadeExt>

@property (retain, nonatomic) MyWCDB *database;

- (id)init;
- (void)willDisplayShareButtonForDataItem:(id)a0 inScene:(long long)a1;
- (void)didClickShareButtonForDataItem:(id)a0 inScene:(long long)a1;
- (void)markActionRecordForDetailPageWithDataItem:(id)a0 action:(long long)a1;
- (BOOL)hasActionRecordForDetailPageWithDataItem:(id)a0;
- (BOOL)updateActionRecordFromLocalDataItem:(id)a0 toServerDataItem:(id)a1;
- (void)onSnsNewCommitFinished:(id)a0 task:(id)a1;
- (void).cxx_destruct;

@end
