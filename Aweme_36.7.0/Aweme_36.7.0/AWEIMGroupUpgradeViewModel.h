@class AWEIMMessageConversation, NSArray, AWEIMGroupUpgradeInfo, NSNumber, AWEIMGroupUpgradeConfirmButtonViewModel;

@interface AWEIMGroupUpgradeViewModel : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL shouldEnableMultiModule;
@property (retain, nonatomic) NSArray *sectionViewModels;
@property (nonatomic) BOOL shouldShowLoadingView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSNumber *expUpgradeNumber;
@property (retain, nonatomic) AWEIMGroupUpgradeConfirmButtonViewModel *confirmButtonViewModel;
@property (retain, nonatomic) AWEIMGroupUpgradeInfo *pageModel;
@property (nonatomic) BOOL alreadyUpgrade;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowNextPage;
- (void)tryResetTaskDisableResponseToClick;
- (void)updateConfirmButtonVMWith:(BOOL)a0;
- (id)getConfirmPageConfigModel;
- (void)requestUpdateGroup:(id /* block */)a0;
- (BOOL)indexPathOutOfRange:(id)a0;
- (id)taskViewModelAtIndexPath:(id)a0;
- (void)makeShouldShowLoadingView:(BOOL)a0;
- (BOOL)sectionIndexOutOfRange:(long long)a0;
- (void)__constructFunctionsWithGroupUpGradeInfo:(id)a0;
- (BOOL)shouldButtonEnableClick;
- (id)confirmViewTitle;
- (id)confirmViewTipTemplateText;
- (id)tipTemplateAction;
- (id)__sectionViewModelsFramework;
- (id)__sectionDataWithTaskTypes:(id)a0 fromTaskList:(id)a1;
- (id)__sectionViewModelWithIdentifier:(id)a0 sectionTitle:(id)a1 taskTypes:(id)a2;
- (id)p_getButtonHintNoticeModel;
- (BOOL)__allTaskCompleted;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
