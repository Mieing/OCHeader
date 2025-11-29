@class NSString, BDECPigeonConversationHintModel, AWEECOMIMAbstractConversationModel;
@protocol AWEECOMIMPaasShopInfoModelProtocol;

@interface AWEECOMIMChatListCellModel : NSObject <AWEECOMIMChatListCellModelProtocol>

@property (nonatomic) long long convType;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *lastMsg;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *serviceEntityID;
@property (copy, nonatomic) NSString *encodedShopID;
@property (nonatomic) long long businessCovBizType;
@property (nonatomic) long long unReadNum;
@property (nonatomic) long long lastMsgTime;
@property (nonatomic) BOOL isOnTop;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL canSetTop;
@property (nonatomic) BOOL canMute;
@property (nonatomic) BOOL canDelete;
@property (nonatomic) long long lastMsgType;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) BOOL isDraft;
@property (nonatomic) BOOL isSendFail;
@property (nonatomic) unsigned long long remindStyle;
@property (nonatomic) unsigned long long remindColorStyle;
@property (nonatomic) BOOL isOfficial;
@property (copy, nonatomic) NSString *officialText;
@property (retain, nonatomic) BDECPigeonConversationHintModel *hintBeforeContent;
@property (retain, nonatomic) AWEECOMIMAbstractConversationModel *originalDataModel;
@property (retain, nonatomic) id<AWEECOMIMPaasShopInfoModelProtocol> shopInfoModel;
@property (retain, nonatomic) NSString *pigeonBizType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)cellModelType;
- (void).cxx_destruct;

@end
