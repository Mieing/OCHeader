@interface IESIMB2CImpl.IMB2CQuestionsComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction, AWEIMInputVIewControllerAction, AWEIMMessageListBottomFloatingViewProtocol> {
    void /* function */ continueBlock;
    void /* function */ removeBlock;
    void /* unknown type, empty encoding */ firstFrameOpt;
    void /* unknown type, empty encoding */ hasSetCollectionViewBottomInset;
    void /* unknown type, empty encoding */ questionsContext;
    void /* unknown type, empty encoding */ diffTrackerArray;
    void /* unknown type, empty encoding */ keyBoardShow;
    void /* unknown type, empty encoding */ questionsViewModelList;
    void /* unknown type, empty encoding */ userHasInitiatedOtherActions;
    void /* unknown type, empty encoding */ questionListView;
    void /* unknown type, empty encoding */ bottomFloatingService;
}

@property (nonatomic) BOOL showInFloatMode;
@property (nonatomic, copy) id /* block */ continueBlock;
@property (nonatomic, copy) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)keyboardWillhide:(id)a0;
- (void)hostVC_viewWillAppear;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (double)collectionViewBottomInset;
- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)sendBtnClicked;
- (void)companyMenuDisplayStatusDidChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)init;

@end
