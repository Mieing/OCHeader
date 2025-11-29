@class IESLiveMediaCountView, NSString, IESLiveMediaCountStore, NSDate, UIViewController;
@protocol IESHYControllerProtocol;

@interface IESLiveMediaRoomCountFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleCommentAction, IESHYControllerDelegate, IESLiveMediaRoomCountInterface>

@property (retain, nonatomic) IESLiveMediaCountStore *store;
@property (retain, nonatomic) IESLiveMediaCountView *audienceCountView;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *audienceListVC;
@property (retain, nonatomic) NSDate *audienceListShowStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentRefresh;
- (void)iesHYControllerDidFinishLoad:(id)a0;
- (id)currentMediaRoomCount;
- (void)updateRoomProfile:(long long)a0;
- (void)showAudienceList;
- (void)updateCountViewState:(BOOL)a0;
- (void)showLynxAudienceListWithRankType:(long long)a0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;

@end
