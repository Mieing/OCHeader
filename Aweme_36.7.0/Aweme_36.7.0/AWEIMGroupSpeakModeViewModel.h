@class AWEIMMessageConversation, NSArray, NSTimer, NSString;

@interface AWEIMGroupSpeakModeViewModel : NSObject <IESIMChatDataManagerDelegate>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long currentSpeakMode;
@property (copy, nonatomic) NSArray *assignSpeakUsers;
@property (copy, nonatomic) NSArray *blockUsers;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL triggerChooseAssignUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_chatDataManager:(id)a0 chatDidUpdate:(id)a1;
- (void)onSilentMembers:(id)a0 silentStatus:(long long)a1 silentMembers:(id)a2 silentEndTime:(long long)a3 cmdMessageID:(id)a4;
- (void)onSilentConversation:(id)a0 silentStatus:(long long)a1 cmdMessageID:(id)a2;
- (void)appDidEnterBackgroundNotification:(id)a0;
- (void)__refreshUserList;
- (void)__requestUpdateBlockLeftTime;
- (void)__refreshSpeakMode;
- (void)appDidEnterForegroundNotification:(id)a0;
- (void)__setupBlockTimer;
- (void)__checkBlockUserListValid;
- (void)logInfo:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;
- (id)initWithConversation:(id)a0;

@end
