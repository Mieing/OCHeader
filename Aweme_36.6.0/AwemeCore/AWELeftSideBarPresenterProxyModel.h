@protocol AWELeftSideBarItemAbility, AWELeftSideBarEntranceViewAbility, AWEMessageReachLeftSideBarAbility;

@interface AWELeftSideBarPresenterProxyModel : NSObject

@property (retain, nonatomic) id<AWELeftSideBarEntranceViewAbility> leftSideBarEntranceViewProxy;
@property (retain, nonatomic) id<AWELeftSideBarItemAbility> leftSideBarProxy;
@property (retain, nonatomic) id<AWEMessageReachLeftSideBarAbility> messageReachProxy;

- (void).cxx_destruct;

@end
