@protocol WXPLiteAppModuleEventCallback;

@interface WXPLiteAppModuleCallbackItem : NSObject

@property (nonatomic) long long callbackId;
@property (retain, nonatomic) id<WXPLiteAppModuleEventCallback> callback;

- (id)initWithId:(long long)a0 callback:(id)a1;
- (void).cxx_destruct;

@end
