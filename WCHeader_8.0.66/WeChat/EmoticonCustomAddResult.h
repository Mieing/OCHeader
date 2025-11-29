@class NSString;

@interface EmoticonCustomAddResult : WXPBGeneratedMessage

@property (nonatomic) BOOL isSuccess;
@property (nonatomic) int failReason;
@property (retain, nonatomic) NSString *serverMsg;

+ (void)initialize;

@end
