@class NSString;

@interface InitContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int currentWxcontactSeq;
@property (nonatomic) unsigned int currentChatRoomContactSeq;

+ (void)initialize;

@end
