@class BaseRequest, NSString, NSData, PopupUIData, NSMutableArray;

@interface SubscribeMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int funcFlag;
@property (nonatomic) unsigned int isOpen;
@property (retain, nonatomic) NSString *subscribeUrl;
@property (retain, nonatomic) NSData *buffer;
@property (retain, nonatomic) PopupUIData *uidata;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int popupScene;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *extData;

+ (void)initialize;

@end
