@class AWEIMMessageConversation, NSString, NSArray, AWEIMLiveGroupAnnouncementInfo, NSAttributedString;

@interface AWEIMLiveGroupAnnouncementDisplayViewModel : NSObject <AWEIMGroupNoticeDisplayViewViewModelProtocol>

@property (retain, nonatomic) AWEIMLiveGroupAnnouncementInfo *info;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *timelabelText;
@property (copy, nonatomic) NSAttributedString *contentAttributedLabelText;
@property (copy, nonatomic) NSString *contentLabelText;
@property (copy, nonatomic) NSString *subContentText;
@property (nonatomic) BOOL noticeScrollable;
@property (nonatomic) BOOL useLinkLabel;
@property (copy, nonatomic) NSArray *multiAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__displaySubscribeListFromFullSubscribeList:(id)a0;
- (void)__setup;
- (id)initWithConversation:(id)a0 liveGroupAnnoucementInfo:(id)a1;
- (void)__updateNameAndAvatarWithUser:(id)a0;
- (void)__updateSubscribeCountAndSubscribeList;
- (void)requestToChangeSubscribeStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
