@class MyWCDB;

@interface WCMomentsStarManager : NSObject <WCFacadeExt>

@property (retain, nonatomic) MyWCDB *database;

- (id)init;
- (void)willDisplayStarGuideForDataItem:(id)a0 inScene:(long long)a1;
- (void)didClickStarGuideForDataItem:(id)a0 inScene:(long long)a1;
- (void)markStarGuideActionRecordForDetailPageWithDataItem:(id)a0 action:(long long)a1;
- (BOOL)hasStarGuideActionRecordForDetailPageWithDataItem:(id)a0;
- (BOOL)updateActionRecordFromLocalDataItem:(id)a0 toServerDataItem:(id)a1;
- (void)onSnsNewCommitFinished:(id)a0 task:(id)a1;
- (void).cxx_destruct;

@end
