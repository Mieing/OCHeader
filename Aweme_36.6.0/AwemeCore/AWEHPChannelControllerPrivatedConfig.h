@class NSString, UIViewController, NSMutableDictionary;
@protocol AWEHPChannelPrivatedAbility, AWEHPChannelPageViewControllerPrivateProtocol;

@interface AWEHPChannelControllerPrivatedConfig : NSObject <AWEHPChannelControllerPrivateConfigProtocol>

@property (weak, nonatomic) id<AWEHPChannelPrivatedAbility> privatedAbility;
@property (weak, nonatomic) UIViewController<AWEHPChannelPageViewControllerPrivateProtocol> *pageViewController;
@property (readonly, nonatomic) NSMutableDictionary *attachInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
