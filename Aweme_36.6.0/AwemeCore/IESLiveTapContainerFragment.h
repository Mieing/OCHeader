@class NSString, NSHashTable;
@protocol HTSLiveDiggAction, IESLiveTapAction;

@interface IESLiveTapContainerFragment : IESLiveRoomComponent <IESLiveTapContainerInterface>

@property (retain, nonatomic) id<HTSLiveDiggAction> diggActionCreator;
@property (retain, nonatomic) id<IESLiveTapAction> tapAction;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) BOOL isHideTaskRunning;
@property (nonatomic) BOOL isHideClick;
@property (retain, nonatomic) NSHashTable *doubleTapFowardingViewTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)registerDoubleTapForwardingView:(id)a0;
- (void)unregisterDoubleTapForwardingView:(id)a0;
- (void)didClickContainerView:(id)a0;
- (void)doubleClickContainerView:(id)a0;
- (void)addTapGesture;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (BOOL)shouldReceiveTouch:(id)a0;

@end
