@protocol AWEIMMessageListDataInterface, AWEIMMessageListFoldContinuousMessagesService, AWEIMMessageListBackgroundInterface;

@interface IESIMMessageListHeaderViewConfigComponent : AWEIMComponentBase <IESIMMessageListHeaderViewConfigService>

@property (weak, nonatomic) id<AWEIMMessageListDataInterface> listDataService;
@property (weak, nonatomic) id<AWEIMMessageListBackgroundInterface> backgroundService;
@property (weak, nonatomic) id<AWEIMMessageListFoldContinuousMessagesService> foldMessageService;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)configHeaderViewWithTableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)configHeightForHeaderWithTableView:(id)a0 section:(long long)a1;
- (void).cxx_destruct;

@end
