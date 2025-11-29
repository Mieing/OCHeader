@class IESLiveAudienceAdminPrompViewModel, HTSEventContext, NSString, IESLiveAudienceAdminPrompVcViewHandler;
@protocol IESLiveRoomService;

@interface IESLiveAudienceAdminPrompViewController : UIViewController <IESLiveModalPresentable, IESLiveAudienceAdminPrompViewModelDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveAudienceAdminPrompVcViewHandler *subViewHandler;
@property (retain, nonatomic) IESLiveAudienceAdminPrompViewModel *prompViewModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)keyboardMaskViewAction;
- (void)showInLandView:(id)a0;
- (id)initWithRoom:(id)a0 eventContext:(id)a1 diContext:(id)a2;
- (void)showAboutPrompVC;
- (void)onPromptViewModelListUpdated:(id)a0;
- (void)onPromptTextLimittUpdated:(unsigned long long)a0;
- (void)onPromptErrorMsg:(id)a0;
- (void)onPromptInputButtonTitleChange:(id)a0;
- (void)onPromptEmptyViewHideStatusChange:(BOOL)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dismissViewController;

@end
