@class NSString, NSArray, NSDictionary;
@protocol IESIMHTSKVStore;

@interface AWEIMLiveGroupAnnouncementViewModel : AWEBaseViewModel

@property (copy, nonatomic) NSString *conversationId;
@property BOOL hasAnnouncement;
@property BOOL editable;
@property (copy) NSArray *ownerAvatar;
@property (copy) NSString *introductionText;
@property (copy) NSString *ownerName;
@property (copy) NSString *timeText;
@property (copy) NSString *contentText;
@property (copy) NSArray *subscribeAvatars;
@property (copy) NSString *subscribeNumberText;
@property BOOL isVerifying;
@property (copy) NSString *remindDescText;
@property unsigned long long iconStatus;
@property BOOL canSend;
@property (copy) NSString *sendBtnTitle;
@property (copy) NSString *sendDesc;
@property long long announcementId;
@property long long scheduleTime;
@property (copy, nonatomic) NSString *appointmentId;
@property (retain, nonatomic) id<IESIMHTSKVStore> kvStore;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSString *enterFrom;

- (id)initWithConversationId:(id)a0 ext:(id)a1;
- (void)updateRemindStatusWithCompletion:(id /* block */)a0;
- (void)transferToEditPage;
- (void)transferToNewEditPage;
- (void)__applyExt;
- (id)p_findAnnouncementInfo:(id)a0;
- (void)sendBulletLiveGroupAnnouncementMessageWithContent:(id)a0;
- (void)__sendMessageFailed;
- (void)sendNativeLiveGroupAnnouncementMessageWithContent:(id)a0;
- (void).cxx_destruct;
- (void)fetchData;
- (void)sendMessage;

@end
