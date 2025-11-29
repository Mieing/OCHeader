@class NSString, AWELeftSideBarBasePresenter;
@protocol AWEMessageReachInternalAbilityProtocol, AWELeftSideBarMessageReachBussinessDelegate;

@interface AWEMessageReachLeftSideBarProxyImpl : NSObject <AWEMessageReachLeftSideBarAbility>

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) id<AWELeftSideBarMessageReachBussinessDelegate> bussinessDelegate;
@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
