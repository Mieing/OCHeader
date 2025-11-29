@class NSString;

@interface WeChat.MagicBrandServiceConstants : NSObject

@property (class, nonatomic, readonly) long long BrandFeeds;
@property (class, nonatomic, readonly) long long BrandRecFeeds;
@property (class, nonatomic, readonly) NSString *EventOnBrandServiceBoxExpose;
@property (class, nonatomic, readonly) NSString *EventOnBrandServiceBoxClick;
@property (class, nonatomic, readonly) NSString *EventOnBrandServiceBoxQuit;
@property (class, nonatomic, readonly) NSString *EventOnBrandServiceAdInfo;
@property (class, nonatomic, readonly) NSString *EventOnBrandServiceAdFlutterCardExpose;
@property (class, nonatomic, readonly) long long createByBrandServiceBoxClick;
@property (class, nonatomic, readonly) long long createByBrandServiceBoxExpose;
@property (class, nonatomic, readonly) long long createByBrandServiceRecreate;
@property (class, nonatomic, readonly) long long createByReceiveMsgOutOfBox;
@property (class, nonatomic, readonly) long long createByReceiveNotifyResort;
@property (class, nonatomic, readonly) long long createByNewFlutterEngineAttach;
@property (class, nonatomic, readonly) long long destroyByFlutterEngineDestroy;
@property (class, nonatomic, readonly) long long destroyByAppEnterBackGround;
@property (class, nonatomic, readonly) long long destroyByAccountSwitch;
@property (class, nonatomic, readonly) long long destroyByNewFlutterEngineAttach;
@property (class, nonatomic, readonly) NSString *ResortTypePreResort;
@property (class, nonatomic, readonly) NSString *ResortTypeResortStart;
@property (class, nonatomic, readonly) NSString *ResortTypeResortEnd;

- (id)init;
- (void).cxx_destruct;

@end
