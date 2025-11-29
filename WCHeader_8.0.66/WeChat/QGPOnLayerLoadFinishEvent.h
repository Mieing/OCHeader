@class NSString;

@interface QGPOnLayerLoadFinishEvent : QGPEvent

@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMsg;

+ (id)createErrorCode:(long long)a0 errorMsg:(id)a1;
+ (id)successEvent;
+ (id)internalErrorEvent:(id)a0;

- (void).cxx_destruct;

@end
