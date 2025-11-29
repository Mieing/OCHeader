@class NSString;

@interface EcsCorpPresentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *giverUserid;
@property (retain, nonatomic) NSString *giverOpenid;
@property (retain, nonatomic) NSString *giverOpenUserid;
@property (retain, nonatomic) NSString *receiverUserid;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (retain, nonatomic) NSString *receiverOpenUserid;
@property (retain, nonatomic) NSString *receiveCorpChatId;
@property (nonatomic) unsigned long long giverUseruin;
@property (nonatomic) unsigned long long receiverUseruin;
@property (retain, nonatomic) NSString *receiveWxGroupId;
@property (nonatomic) unsigned long long groupWxMemberCnt;
@property (retain, nonatomic) NSString *openCorpid;
@property (retain, nonatomic) NSString *receiveOpenGroupId;
@property (retain, nonatomic) NSString *receiveCorpId;
@property (retain, nonatomic) NSString *giverCorpid;

+ (void)initialize;

@end
