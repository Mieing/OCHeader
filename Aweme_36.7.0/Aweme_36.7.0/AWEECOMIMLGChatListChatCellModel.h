@class NSString, AWEECOMIMLGAbstractConversationModel;

@interface AWEECOMIMLGChatListChatCellModel : NSObject <AWEECOMIMLGChatListChatCellModelProtocol>

@property (copy, nonatomic) NSString *scheme;
@property (retain, nonatomic) AWEECOMIMLGAbstractConversationModel *originalDataModel;
@property (nonatomic) long long convType;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *promotionDesc;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *serviceEntityID;
@property (copy, nonatomic) NSString *encodedShopID;
@property (copy, nonatomic) NSString *lastMsgTaskNo;
@property (nonatomic) BOOL isOfficial;
@property (copy, nonatomic) NSString *officialText;
@property (copy, nonatomic) NSString *lastMsg;
@property (nonatomic) BOOL isDraft;
@property (nonatomic) BOOL isSendFail;
@property (nonatomic) long long lastMsgTime;
@property (nonatomic) long long lastMsgType;
@property (nonatomic) long long unReadNum;
@property (nonatomic) long long remindStyle;
@property (nonatomic) BOOL isOnTop;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL canSetTop;
@property (nonatomic) BOOL canMute;
@property (nonatomic) BOOL canDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
