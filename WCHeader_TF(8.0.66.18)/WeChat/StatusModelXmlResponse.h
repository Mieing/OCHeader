@class NSString, StatusInfo;

@interface StatusModelXmlResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (nonatomic) int type;
@property (retain, nonatomic) StatusInfo *info;

+ (void)initialize;

@end
