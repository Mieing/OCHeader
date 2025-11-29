@class NSString, IESIMChatDiskCleanContext;

@interface IESIMChatDiskCleanViewController : AWEIMComponentViewController <AWERouterViewControllerProtocol, AWEIMComponentManagerDependency>

@property (retain, nonatomic) IESIMChatDiskCleanContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
