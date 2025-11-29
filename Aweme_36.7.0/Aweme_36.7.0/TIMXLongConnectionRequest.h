@class NSString, NSDictionary, NSData, TIMXSDKInstance;

@interface TIMXLongConnectionRequest : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) unsigned long long sequenceId;
@property (nonatomic) unsigned long long logId;
@property (nonatomic) int method;
@property (nonatomic) int service;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadEncoding;
@property (nonatomic) unsigned long long maxPayloadByteSize;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) id /* block */ successCompletionBlock;
@property (copy, nonatomic) id /* block */ failureCompletionBlock;
@property (copy, nonatomic) id /* block */ mappingBlock;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ beforeFilterBlock;
@property (copy, nonatomic) id /* block */ errorInMappedResponseBlock;
@property (nonatomic) double timeout;

+ (id)requestWithRootObject:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (Class)callbackClass;

- (BOOL)send;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;
- (void)willSend;

@end
