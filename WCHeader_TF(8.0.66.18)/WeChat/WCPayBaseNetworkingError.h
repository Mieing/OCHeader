@class NSString;

@interface WCPayBaseNetworkingError : MMObject

@property (copy, nonatomic) NSString *errorDesc;
@property (nonatomic) int errorCode;

+ (id)errorWithErrorDesc:(id)a0;
+ (id)errorWithErrorDesc:(id)a0 errorCode:(int)a1;

- (id)init;
- (void).cxx_destruct;

@end
