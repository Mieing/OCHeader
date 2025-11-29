@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface WCTimelineEditBehaviorInfo : NSObject

@property (retain, nonatomic) NSString *postSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) long long visibleBtnClickNum;
@property (nonatomic) long long latestSettingShowStatue;
@property (nonatomic) long long latestSettingClickStatue;
@property (nonatomic) long long latestSettingGroupCount;
@property (retain, nonatomic) NSString *latestSettingGroupList;
@property (nonatomic) long long latestSettingUinCount;
@property (retain, nonatomic) NSString *latestSettingUinList;
@property (nonatomic) long long latestSettingLabelCount;
@property (retain, nonatomic) NSString *latestSettingLabelList;
@property (nonatomic) long long privacyScene;
@property (nonatomic) long long importFromChatroomClickCount;
@property (retain, nonatomic) NSMutableArray *selectedChatroomArr;
@property (retain, nonatomic) NSMutableDictionary *chatroomDetailViewDic;
@property (nonatomic) long long importFromContactClickCount;
@property (retain, nonatomic) NSMutableArray *selectedContactArr;
@property (retain, nonatomic) NSMutableArray *selectedLabelArr;
@property (retain, nonatomic) NSString *publishID;
@property (nonatomic) long long postStatus;
@property (nonatomic) BOOL dynamicTagEnabled;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) long long previousPrivacy;
@property (retain, nonatomic) NSMutableArray *selectFriendFromTags;
@property (retain, nonatomic) NSMutableSet *searchSelectVisibleTagIDSet;
@property (retain, nonatomic) NSMutableSet *searchSelectInVisibleTagIDSet;
@property (nonatomic) unsigned long long searchTagCountOfSelectFriendFromTags;
@property (nonatomic) unsigned long long privacySettingStartTime;
@property (nonatomic) unsigned long long privacySettingDuration;
@property (nonatomic) unsigned long long selectFriendStartTime;
@property (nonatomic) unsigned long long selectFriendDuration;
@property (nonatomic) unsigned long long selectFriendFromGroupStartTime;
@property (nonatomic) unsigned long long selectFriendFromGroupDuration;
@property (nonatomic) unsigned long long selectFriendFromTagStartTime;
@property (nonatomic) unsigned long long selectFriendFromTagDuration;
@property (nonatomic) unsigned long long selectTagStartTime;
@property (nonatomic) unsigned long long selectTagDuration;

- (id)init;
- (void)setupInitData;
- (id)getChatRoomNameAndUserCountStr:(id)a0;
- (id)getLableNameAndUserCountStr:(id)a0;
- (id)genPrivacySettingString;
- (unsigned long long)searchTagCountOfSelectTag;
- (id)getLabelIdStr:(id)a0;
- (id)logString;
- (void).cxx_destruct;

@end
