@class NSString, NSData, CdnError;

@interface CdnBaseResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *filekey;
@property (nonatomic) unsigned long long taskid;
@property (nonatomic) int bizid;
@property (retain, nonatomic) CdnError *error;
@property (nonatomic) unsigned long long userContext;
@property (retain, nonatomic) NSString *arginfo;
@property (retain, nonatomic) NSData *bizRspPayload;

+ (void)initialize;

@end
