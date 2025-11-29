@class NSString;
@protocol IESLivePlaybackTapAction;

@interface IESLivePlaybackTapContainerFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) id<IESLivePlaybackTapAction> tapAction;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) BOOL isHideTaskRunning;
@property (nonatomic) BOOL isHideClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)didClickContainerView:(id)a0;
- (void)doubleClickContainerView:(id)a0;
- (void)componentWillMount;
- (BOOL)shouldAddGesture;
- (void)addTapGesture;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (BOOL)shouldReceiveTouch:(id)a0;

@end
