@class NSString, AWEIMSkylightCellRender, AWEIMSkylightCellComponentContext, AWEIMOnlineContactAvatarViewModel, AWEIMComponentManager;

@interface AWEIMSkylightCellViewModel : NSObject <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMSkylightCellViewModelProtocol>

@property (retain, nonatomic) AWEIMSkylightCellComponentContext *componentContext;
@property (retain, nonatomic) AWEIMOnlineContactAvatarViewModel *model;
@property (retain, nonatomic) AWEIMSkylightCellRender *skylightRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentsNameArrayWithContext:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidAppear;
- (void)updateCellLayoutAndReloadPresenter:(id)a0;
- (void)renderInCell:(id)a0;
- (void)componentCellPrepareForReuse;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)buildComponents;
- (void)updateWithModel:(id)a0;

@end
