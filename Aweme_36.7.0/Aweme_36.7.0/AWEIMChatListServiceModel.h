@class AWEIMUser, NSString, AWEIMChatListServiceDraftModel, AWEIMChatListServiceMessageModel, AWEIMChatModel, AWEURLModel;

@interface AWEIMChatListServiceModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double updateDate;
@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (retain) AWEIMChatListServiceMessageModel *latestMessage;
@property (copy, nonatomic) NSString *explainText;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) AWEIMChatListServiceDraftModel *draftModel;
@property (weak, nonatomic) AWEIMChatModel *chatModel;
@property (nonatomic) unsigned long long remindStyle;
@property (copy, nonatomic) id /* block */ customizedAvatarGettingBlock;
@property long long groupID;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
