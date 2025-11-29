@protocol AWEFeedAutoPlayManagerProtocol;

@interface AWELongPressPaneliPadAutoPlayViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)longPressPanelViewModel;
+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)switchDidChange:(id)a0;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
