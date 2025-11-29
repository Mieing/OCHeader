@class NSString, UIViewController, LiteAppJsApiCallback;

@interface LiteAppJsApi : NSObject {
    UIViewController *_controller;
}

@property (nonatomic) double timeInterval;
@property (retain, nonatomic) LiteAppJsApiCallback *callBack;
@property (weak, nonatomic) UIViewController *controller;
@property (nonatomic) unsigned int localId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *apiName;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (BOOL)invokeInMainThread;
- (void).cxx_destruct;

@end
