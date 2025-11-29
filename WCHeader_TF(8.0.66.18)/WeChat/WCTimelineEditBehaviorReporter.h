@class WCTimelineEditBehaviorInfo;

@interface WCTimelineEditBehaviorReporter : NSObject

@property (retain, nonatomic) WCTimelineEditBehaviorInfo *info;

+ (id)sharedInstance;

- (void)resetReporterStatus;
- (void)resetReporterStatusWithPostReportSession:(id)a0;
- (void)updatePostPrivacy:(long long)a0;
- (long long)convertPostPrivacy:(long long)a0;
- (void)updateTimelineStatueCancel:(BOOL)a0;
- (void)updateTimelineStatusPost;
- (void)updateSelectedChatroom:(id)a0;
- (void)updateSelectedContact:(id)a0;
- (void)updateSelectedContactlabel:(id)a0;
- (void)chatroomDetailClickCount:(id)a0;
- (void)visibleSettingClickCount;
- (void)importFromContactClickCount;
- (void)importFromChatroomClickCount;
- (void)clickLatestSetting;
- (void)updatePublishID:(id)a0;
- (void)updateDynamicTagFlag:(BOOL)a0;
- (void)updateEditEnterScene:(unsigned long long)a0;
- (void)updatePreviousPrivacy:(long long)a0;
- (void)addTagsToSelectFriendFromTags:(id)a0;
- (void)didEnterPrivacySettingPage;
- (void)didLeavePrivacySettingPage;
- (void)didEnterSelectFriendPage;
- (void)didLeaveSelectFriendPage;
- (void)didEnterSelectFriendFromGroupPage;
- (void)didLeaveSelectFriendFromGroupPage;
- (void)didEnterSelectFriendFromTagPage;
- (void)didLeaveSelectFriendFromTagPage;
- (void)didEnterSelectTagPage;
- (void)didLeaveSelectTagPage;
- (void)didSelectTagFromSearch:(id)a0 privacy:(long long)a1;
- (void)didSelectTagCountFromSearchForImport:(unsigned long long)a0;
- (void)kvDataReport;
- (void).cxx_destruct;

@end
