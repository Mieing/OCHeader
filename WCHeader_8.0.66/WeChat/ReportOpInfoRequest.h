@class NSData;

@interface ReportOpInfoRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int toPlatform;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSData *opReqBuffer;
@property (nonatomic) unsigned long long reqId;

+ (void)initialize;

@end
