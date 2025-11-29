@class NSString;

@interface WeChat.MagicEcsTLConstants : NSObject

@property (class, nonatomic, readonly) NSString *EventOnBrandEcsBoxExpose;
@property (class, nonatomic, readonly) NSString *EventOnBrandEcsBoxClick;
@property (class, nonatomic, readonly) NSString *EventOnBrandEcsBoxQuit;
@property (class, nonatomic, readonly) long long createByBrandEcsBoxClick;
@property (class, nonatomic, readonly) long long createByBrandEcsBoxExpose;
@property (class, nonatomic, readonly) long long createByNewFlutterEngineAttach;
@property (class, nonatomic, readonly) long long destroyByBrandEcsFlutterEngineDestroy;
@property (class, nonatomic, readonly) long long destroyByAppEnterBackGround;
@property (class, nonatomic, readonly) long long destroyByAccountSwitch;
@property (class, nonatomic, readonly) long long destroyByNewFlutterEngineAttach;

- (id)init;
- (void).cxx_destruct;

@end
