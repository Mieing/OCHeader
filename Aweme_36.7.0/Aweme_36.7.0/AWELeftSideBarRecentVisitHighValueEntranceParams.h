@class AWELeftSideBarDynamicItemHighValueAppModel, AWELeftSideBarRecentVisitAppContainerView;

@interface AWELeftSideBarRecentVisitHighValueEntranceParams : NSObject

@property (nonatomic) long long index;
@property (retain, nonatomic) AWELeftSideBarDynamicItemHighValueAppModel *highValueModel;
@property (weak, nonatomic) AWELeftSideBarRecentVisitAppContainerView *appContainerView;
@property (nonatomic) double uniqId;

- (void).cxx_destruct;

@end
