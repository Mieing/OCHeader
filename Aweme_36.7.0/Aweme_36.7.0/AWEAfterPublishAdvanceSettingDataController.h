@class NSNumber, NSArray, AWEAwemeModel, NSMutableArray, AWEDownloadPermissionItem;

@interface AWEAfterPublishAdvanceSettingDataController : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDownloadPermissionItem *downloadPermissionItem;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *cellClassArray;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (retain, nonatomic) NSNumber *storyPermission;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSArray *commentProtectionModeConfigArray;

- (id)downloadForbidToast;
- (id)duetForbidToast;
- (BOOL)isBeforePublish;
- (id)storyForbidToast;
- (id)shareToStorySettingTitle;
- (id)commentForbidToast;
- (id)duetPermissionInitialState;
- (id)storySharePermissionInitialState;
- (void)constructPermissionItemsAfterPublish;
- (void)constructCommentPermissionItem;
- (void)constructDanmakuPermissionItems;
- (void)constructDownloadPermissionItems;
- (void)constructAIFollowShootPermissionItems;
- (BOOL)__shoulsShowReward;
- (void)constructRewardPermissionItems;
- (void)setVideotoTextPermission;
- (void)constructRelationBarPermissionItems;
- (void)constructCommentProtectionModeItem;
- (void)constructVideotoTextPermissionItem;
- (long long)__initialRewardBtnStatus;
- (BOOL)shouldForbidDownload;
- (BOOL)downloadPermissionInitialState;
- (BOOL)relationBarPermissionInitialState;
- (BOOL)initialVideotoTextStatus;
- (BOOL)shouldForbidComment;
- (id)commentPermissionTextDict;
- (id)commentProtectionModeTitleWithSelectedSetting:(id)a0;
- (BOOL)shouldForbidDuet;
- (id)duetPermissionTextDict;
- (BOOL)shouldForbidShareAsStory;
- (id)danmukuPermissionTextDict;
- (id)initWithAwemeModel:(id)a0 scene:(long long)a1;
- (void)updateSelecterSettings:(id)a0 atIndex:(long long)a1 withCompletion:(id /* block */)a2;
- (void)updateCommentSettings:(id)a0 atIndex:(long long)a1 withCompletion:(id /* block */)a2;
- (void)updateCommentProtectionModeSettings:(id)a0 atIndex:(long long)a1 withCompletion:(id /* block */)a2;
- (void)updateDanmakuSettings:(id)a0 atIndex:(long long)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
