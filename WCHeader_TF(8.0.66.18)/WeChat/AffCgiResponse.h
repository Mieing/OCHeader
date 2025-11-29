@class NSString, NSData;

@interface AffCgiResponse : WXPBGeneratedMessage

@property (nonatomic) int errorType;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long taskId;

+ (void)initialize;

- (void)setTaskId:(unsigned long long)a0;
- (unsigned long long)taskId;
- (void)setData:(id)a0;
- (id)data;
- (void)setErrorMessage:(id)a0;
- (id)errorMessage;
- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (void)setErrorType:(int)a0;
- (int)errorType;

@end
