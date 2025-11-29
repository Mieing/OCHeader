@class AWEIMFastReplyListEditViewModel, NSString, UICollectionView, UILabel, AWEAnimatedButton, AWEUILoadingView;

@interface AWEIMFastReplyListEditViewController : AWEIMHalfScreenContainerViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAnimatedButton *saveButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEIMFastReplyListEditViewModel *viewModel;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (double)externalAssignTopDragHeight;
- (void)halfScreenContainerVCDidTapConatainer:(id)a0;
- (id)replyLabel;
- (double)heightOfContainerView;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)cancelButtonPressed:(id)a0;
- (void)setupSubviews;
- (void)keyboardWillHideNotification:(id)a0;
- (void)saveButtonPressed:(id)a0;
- (void)dismissVC;
- (void)keyboardWillShowNotification:(id)a0;
- (void)handleTapGestureRecognizer:(id)a0;

@end
