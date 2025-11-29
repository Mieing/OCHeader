@class NSString;
@protocol AWELeftSideBarManagerAbilityProtocol;

@interface AWEUserProfilePluginSideBarController : NSObject <AWEHPLeftSideBarPluginControllerProtocol>

@property (weak, nonatomic) id<AWELeftSideBarManagerAbilityProtocol> sideBarManagerAbility;
@property (nonatomic) BOOL isNotFirstViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
