@class NSString, NSDictionary;

@interface BDLynxBridgeReceivedMessage : NSObject

@property (nonatomic) long long bdwm_invokeTS;
@property (nonatomic) BOOL callOnMainThread;
@property (nonatomic) BOOL puzzleIsIntercepted;
@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSDictionary *rawData;
@property (readonly, copy, nonatomic) NSString *protocolVersion;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *namescope;
@property (readonly, copy, nonatomic) id data;
@property (readonly, nonatomic) BOOL useUIThread;
@property (readonly, nonatomic) BOOL isDefaultOfUseUIThread;

+ (id)errorSendMessageWith:(id)a0 containerID:(id)a1;
+ (id)noHandleErrorMessage:(id)a0;

- (id)initWithMethodName:(id)a0 rawData:(id)a1;
- (void)useUIThreadDisable;
- (id)paramsError:(id)a0;
- (id)noHandlerError;
- (void).cxx_destruct;
- (void)decode;

@end
