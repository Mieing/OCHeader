@class AWEIMGiphySearchResultWrapper, NSString, UIView;
@protocol IESIMStickerHorizontalSelectionView, AWEIMMessageTableViewInterface;

@interface IESIMInnerPushRecommendGiphyComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListBottomFloatingViewProtocol, AWEIMFloatGestureHandler, AWEIMMessageListInputModuleAction, IESIMStickerHorizontalSelectionViewDelegate>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableviewService;
@property (nonatomic) long long targetMessageID;
@property (retain, nonatomic) UIView<IESIMStickerHorizontalSelectionView> *contentView;
@property (retain, nonatomic) AWEIMGiphySearchResultWrapper *searchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (BOOL)shouldFailFloatGestureRecognizer:(id)a0;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)hostVC_afterFirstRender;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (id)p_backgroundColor;
- (void)selectionViewDidSwipeDismiss:(id)a0;
- (void)selectionView:(id)a0 didSelectEmoticon:(id)a1 indexPath:(id)a2;
- (id)conversationForTrack;
- (id)showTrackParamsWithModel:(id)a0 indexPath:(id)a1;
- (id)p_latestTextMessage;
- (void)p_showResultViewIfNeededWithData:(id)a0;
- (void)p_dismissViewIfNeeded;
- (void)p_setupUIIfNeeded;
- (void).cxx_destruct;

@end
