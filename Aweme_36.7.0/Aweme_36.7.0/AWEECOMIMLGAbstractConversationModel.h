@class NSString, NSNumber, NSDictionary;

@interface AWEECOMIMLGAbstractConversationModel : NSObject

@property (nonatomic) long long convType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSNumber *conversationShortID;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *lastMsg;
@property (copy, nonatomic) NSString *lastMsgID;
@property (copy, nonatomic) NSString *lastMsgTaskNo;
@property (nonatomic) BOOL lastMsgIsDraft;
@property (nonatomic) BOOL lastMsgSenderIsMe;
@property (nonatomic) long long lastMsgType;
@property (nonatomic) long long lastMessageSentStatus;
@property (nonatomic) long long lastMsgTime;
@property (nonatomic) long long unReadNum;
@property (nonatomic) BOOL isOnTop;
@property (nonatomic) BOOL canSetTop;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL canMute;
@property (nonatomic) BOOL canDelete;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *serviceEntityID;
@property (copy, nonatomic) NSString *officialText;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) long long businessConvBizType;
@property (nonatomic) long long remindStyle;

- (void).cxx_destruct;

@end
