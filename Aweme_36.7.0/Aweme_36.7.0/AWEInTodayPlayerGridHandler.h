@class AWEInTodaySchemaData, AWEInTodayAggregateConfig, NSString, AWEInTodayListViewController, NSObject, UIViewController;
@protocol AWEMemoriesPlayerControlProtocol, AWEMemoriesPlayerDataControllerProtocol;

@interface AWEInTodayPlayerGridHandler : NSObject

@property (retain, nonatomic) AWEInTodayListViewController *gridViewController;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) NSObject<AWEMemoriesPlayerControlProtocol> *playerControlManager;
@property (weak, nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEInTodaySchemaData *schemaData;
@property (retain, nonatomic) AWEInTodayAggregateConfig *aggregateConfig;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL gridShowed;
@property (nonatomic) BOOL isLoading;

- (void)removeGridViewController;
- (void)showGridViewIsSelected:(BOOL)a0 publishAction:(id /* block */)a1 dismissAction:(id /* block */)a2 shootAction:(id /* block */)a3;
- (void).cxx_destruct;

@end
