@class NSString;

@interface StatusCgiStatusModelParseResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;

+ (void)initialize;

- (void)setErrorMsg:(id)a0;
- (id)errorMsg;
- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (void)setResult:(BOOL)a0;
- (BOOL)result;

@end
