@class UserGrantInterfaceBody_InterfaceBodyItem;

@interface MMAuthorizeGameInfoCellVM : NSObject

@property (nonatomic) double cellHeight;
@property (retain, nonatomic) UserGrantInterfaceBody_InterfaceBodyItem *bodyItem;
@property (nonatomic) unsigned int selectStatus;
@property (nonatomic) BOOL shouldShow;

- (void)prepareDataForUse;
- (void)calCellHeight;
- (void).cxx_destruct;

@end
