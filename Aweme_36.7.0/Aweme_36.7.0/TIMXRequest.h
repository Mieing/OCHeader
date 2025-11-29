@class NSString, NSDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXRequest : NSObject {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *baseURL;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) float priority;
@property (nonatomic) unsigned long long requestMethod;
@property (copy, nonatomic) id params;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) id /* block */ errorInResponseBlock;
@property (copy, nonatomic) id /* block */ mappingBlock;
@property (copy, nonatomic) id /* block */ successCompletionBlock;
@property (copy, nonatomic) id /* block */ failureCompletionBlock;
@property (nonatomic) unsigned long long parameterEncoding;
@property (copy, nonatomic) id /* block */ paramsSerializer;
@property (copy, nonatomic) id /* block */ reponseSerializer;
@property (retain, nonatomic) id userinfo;
@property (nonatomic) BOOL skipCallbackIfUserChanged;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) int cmd;

+ (id)requestWithRootObject:(id)a0 successResponseBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

- (void)send;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;
- (id)currentUserID;

@end
