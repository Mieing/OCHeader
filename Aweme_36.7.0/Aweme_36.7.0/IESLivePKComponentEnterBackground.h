@class IESLivePKBackgroundTipView, UIView;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentEnterBackground : IESLivePKComponent

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLivePKBackgroundTipView *selfBackgroundTip;
@property (retain, nonatomic) IESLivePKBackgroundTipView *oppositeBackgroundTip;
@property (retain, nonatomic) UIView *separatedLine;
@property (nonatomic) double selfGuestOffset;
@property (nonatomic) double oppoGuestOffset;
@property (nonatomic) BOOL isDidShowGameFullToast;

- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)observeUserBackgroundStatus;
- (void)showSelfBackgroundTipIfNeeds;
- (void)showOppositeBackgroundTipIfNeeds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selfBackgroundFrame;
- (void)showSeparatedLineIfNeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oppositeBackgroundFrame;
- (void).cxx_destruct;

@end
