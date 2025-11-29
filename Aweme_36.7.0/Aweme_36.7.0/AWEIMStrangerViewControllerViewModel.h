@class AWEIMStrangerBoxChatDataManager;
@protocol AWEIMStrangerViewControllerViewModelWeakVC;

@interface AWEIMStrangerViewControllerViewModel : NSObject <AWEIMStrangerBlockMsgInteractorDataSource>

@property (retain, nonatomic) AWEIMStrangerBoxChatDataManager *dataController;
@property (weak, nonatomic) id<AWEIMStrangerViewControllerViewModelWeakVC> weakVC;

- (id)conversationDataManager;
- (void)configViewModel;
- (id)getBizInfo;
- (void)strangerConversationCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (void)strangerMessageCountAfterDate:(id)a0 completion:(id /* block */)a1;
- (void)refreshCurrentStrangerBoxWhenInStrangerList;
- (void)markCurrentEnterStrangerBoxDate;
- (void)fetchStrangerData;
- (void)gotoProfileViewControllerWithChatModel:(id)a0;
- (void)gotoMessageListViewControllerWithChatModel:(id)a0 cellVM:(id)a1;
- (void)clearUserFlagIfNeeded;
- (void)removeAcquaintanceChat:(id)a0;
- (void)addMarkReadCofig;
- (void)fetchStrangerDataWithIsInit:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
