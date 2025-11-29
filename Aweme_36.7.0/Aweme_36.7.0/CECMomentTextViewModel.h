@class NSString, UIView;
@protocol CECMomentCameraSubModeService;

@interface CECMomentTextViewModel : AFDMomentCameraBaseViewModel <CECMomentTextInterface>

@property (weak, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (nonatomic) long long keyboardState;
@property (nonatomic) long long currentModeId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginKeyboardFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endKeyboardFrame;
@property (nonatomic) double keyboardShowDuration;
@property (nonatomic) BOOL hasObserverKeyboard;
@property (nonatomic) long long keyboardAnimationCurve;
@property (nonatomic) BOOL currentIsInTransition;
@property (nonatomic) BOOL isLandingNormalPrivateView;
@property (retain, nonatomic) UIView *textContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectService;
- (void)addObserverKeyBoard;
- (void)removeObserverKeyBoard;
- (void)trackMomentTextLimitNoticeShowEvent;
- (void)trackMomentTextKeyboardShowEvent;
- (void)updateCurrentModeId:(long long)a0;
- (void)keyBoardWillShow:(id)a0;
- (void)keyBoardDidShow:(id)a0;
- (void)keyBoardWillHide:(id)a0;
- (void)keyBoardDidHide:(id)a0;
- (BOOL)shouldIgnoreKeyboardEvent;
- (void).cxx_destruct;

@end
