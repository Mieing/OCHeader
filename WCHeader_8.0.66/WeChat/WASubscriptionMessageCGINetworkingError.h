@class NSString;

@interface WASubscriptionMessageCGINetworkingError : NSObject

@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) int errorCode;
@property (nonatomic) unsigned int uiMessage;

+ (id)errorWithErrorCode:(int)a0 errorMessage:(id)a1 uiMessage:(int)a2;

- (id)init;
- (void).cxx_destruct;

@end
