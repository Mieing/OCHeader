@class NSString;

@interface JSAPIBaseResponse : WXPBGeneratedMessage

@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;
@property (nonatomic) int errNo;

+ (void)initialize;

@end
