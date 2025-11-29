@class NSDictionary, NSString;

@interface AWEIMMessageViewControllerCharacteristicsComponent : AWEIMComponentBase <AWEIMMessageViewControllerCharacteristicsComponentProtocol>

@property (nonatomic) long long unreadCont;
@property (retain, nonatomic) NSDictionary *cachedCharacteristicsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)characteristicsDictionary;
- (void).cxx_destruct;

@end
