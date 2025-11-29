@class AWEPostPageElementCenter, NSString, AWEPublishAndAdvanceSettingsPopupServiceContainer, AWEVideoPublishViewModel, UITableView;
@protocol AWEPostPageLifeCycleMessage, AWEPublishAndAdvanceSettingsPopupDelegate, AWEPublishAdvanceSettingsDataControllerProtocol, AWEPostPageContext, IESServiceProvider, AWEPublishAndAdvanceSettingsPopupDataSource;

@interface AWEPublishAndAdvanceSettingsPopup : NSObject <AWEPublishAndAdvanceSettingsPopup>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<AWEPostPageLifeCycleMessage> dispatcher;
@property (retain, nonatomic) id<AWEPublishAndAdvanceSettingsPopupDataSource> dataSource;
@property (retain, nonatomic) id<AWEPublishAndAdvanceSettingsPopupDelegate> delegate;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsDataControllerProtocol> dataController;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (retain, nonatomic) AWEPostPageElementCenter *elementCenter;
@property (retain, nonatomic) AWEPublishAndAdvanceSettingsPopupServiceContainer *serviceContainer;
@property (weak, nonatomic) id<IESServiceProvider> postPageServiceContainer;
@property (nonatomic, getter=isRegistered) BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)setupTableView:(id)a0;
- (void)setupDataController:(id)a0;
- (void)setupPostPageServiceContainer:(id)a0;
- (void)registerElementsIfNeeded;
- (id)indexPathWithType:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)commonInit;
- (void)cleanUp;

@end
