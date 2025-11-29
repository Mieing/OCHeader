@class NSString;

@interface WCCardDataSeed : MMObject

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardExt;
@property (retain, nonatomic) NSString *fromUserName;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *webUrl;
@property (nonatomic) unsigned int statScene;
@property (retain, nonatomic) NSString *consumedboxCardId;
@property (retain, nonatomic) NSString *templateMsgId;
@property (retain, nonatomic) NSString *recommendCardId;

- (void).cxx_destruct;

@end
