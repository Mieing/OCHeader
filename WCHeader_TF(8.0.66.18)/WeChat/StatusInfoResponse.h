@class NSString, NSMutableArray;

@interface StatusInfoResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSMutableArray *info;

+ (void)initialize;

- (void)setInfo:(id)a0;
- (id)info;
- (void)setErrorMsg:(id)a0;
- (id)errorMsg;
- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (void)setResult:(BOOL)a0;
- (BOOL)result;

@end
