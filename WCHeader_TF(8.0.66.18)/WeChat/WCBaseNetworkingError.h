@class NSString;

@interface WCBaseNetworkingError : MMObject

@property (copy, nonatomic) NSString *errorDesc;
@property (nonatomic) int errorCode;
@property (nonatomic) int m_uiMessage;
@property (nonatomic) BOOL isNetworkError;
@property (nonatomic) BOOL canRetry;

+ (id)errorWithErrorDesc:(id)a0 errorCode:(int)a1;
+ (id)errorWithErrorDesc:(id)a0 errorCode:(int)a1 isNetworkError:(BOOL)a2;
+ (id)errorWithBaseResponse:(id)a0;

- (id)nsError;
- (id)init;
- (void).cxx_destruct;

@end
