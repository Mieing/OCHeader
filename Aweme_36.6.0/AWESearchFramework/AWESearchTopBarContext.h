@class AWESearchSchemaModel, AWESearchTopBarLifeServiceContext;
@protocol AWESearchTopBarControllerDelegate;

@interface AWESearchTopBarContext : NSObject

@property (nonatomic) double topBarWidth;
@property (nonatomic) double topBarHeight;
@property (weak, nonatomic) id<AWESearchTopBarControllerDelegate> delegate;
@property (nonatomic) BOOL enableDeepThink;
@property (retain, nonatomic) AWESearchTopBarLifeServiceContext *lifeServiceContext;
@property (nonatomic) BOOL allowShowScanButton;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;

- (void).cxx_destruct;

@end
