@class AWELeftSideBarModel;

@interface AWELeftSideBarUserModel : NSObject

@property (retain, nonatomic) AWELeftSideBarModel *leftSideBarModel;
@property (nonatomic) long long dataSource;
@property (nonatomic) BOOL hasNotification;
@property (nonatomic) BOOL userHasOpen;

- (void).cxx_destruct;

@end
