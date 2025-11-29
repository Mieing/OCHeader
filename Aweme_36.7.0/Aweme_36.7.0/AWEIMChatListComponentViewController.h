@class NSString, AWEIMChatListControllerContext;

@interface AWEIMChatListComponentViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMChatListControllerContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentsNameArrayWithContext:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
