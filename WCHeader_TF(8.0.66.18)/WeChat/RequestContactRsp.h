@class NSString;

@interface RequestContactRsp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL isSuccess;

+ (void)initialize;

@end
