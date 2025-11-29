@class NSString;

@interface WCCardEnterInfo : MMObject

@property (retain, nonatomic) NSString *cardIdOrTpId;
@property (retain, nonatomic) NSString *cardExt;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int statScene;
@property (retain, nonatomic) NSString *consumedboxCardId;
@property (retain, nonatomic) NSString *templateMsgId;
@property (retain, nonatomic) NSString *recommendCardId;

- (void).cxx_destruct;

@end
