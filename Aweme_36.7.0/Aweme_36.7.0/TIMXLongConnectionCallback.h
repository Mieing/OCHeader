@class NSString, NSDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXLongConnectionCallback : NSObject {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) id /* block */ successCompletionBlock;
@property (copy, nonatomic) id /* block */ failureCompletionBlock;
@property (copy, nonatomic) id /* block */ beforeFilterBlock;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ onIgnoreBlock;
@property (copy, nonatomic) id /* block */ willHandleMessageBlock;
@property (copy, nonatomic) id /* block */ handleMessageBlock;
@property (copy, nonatomic) id /* block */ mappingBlock;
@property (copy, nonatomic) id /* block */ errorInMappedResponseBlock;
@property (nonatomic) SEL configuredSelector;
@property (retain, nonatomic) id userinfo;
@property (copy, nonatomic) NSString *businessClassName;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL skipCallbackIfUserChanged;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)callbackWithRootObject:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;
- (id)currentUserID;

@end
