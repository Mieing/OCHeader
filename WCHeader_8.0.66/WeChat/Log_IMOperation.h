@class NSString, NSMutableArray;

@interface Log_IMOperation : WXPBGeneratedMessage

@property (nonatomic) int importDs;
@property (nonatomic) int ds;
@property (nonatomic) unsigned long long uin;
@property (nonatomic) int device;
@property (nonatomic) int clientVersion;
@property (nonatomic) long long timeStamp;
@property (retain, nonatomic) NSString *currChatName;
@property (retain, nonatomic) NSMutableArray *oplist;

+ (void)initialize;

@end
