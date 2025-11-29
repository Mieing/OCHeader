@class NSString, NSMutableArray;

@interface AffRoamChatMsgItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long createTime;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned long long msgSvrId;
@property (nonatomic) unsigned long long sequentId;
@property (retain, nonatomic) NSMutableArray *mediaId;
@property (retain, nonatomic) NSMutableArray *mediaType;
@property (retain, nonatomic) NSString *msgKey;
@property (nonatomic) unsigned int msgStatus;
@property (nonatomic) unsigned int subType;

+ (void)initialize;

@end
