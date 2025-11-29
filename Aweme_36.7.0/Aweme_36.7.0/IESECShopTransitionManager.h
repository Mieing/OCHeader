@class NSString, IESECShopTransitionViewProvider, UIView;

@interface IESECShopTransitionManager : NSObject <IESECShopTransitionManager> {
    BOOL _inTransition;
    IESECShopTransitionViewProvider *_fromVP;
    IESECShopTransitionViewProvider *_toVP;
}

@property (retain, nonatomic) UIView *transitionView;
@property (weak, nonatomic) UIView *rootView;
@property (copy, nonatomic) id /* block */ frameUpdater;
@property (copy, nonatomic) id /* block */ fromAlphaUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareViewProvider:(id)a0;
- (void)transferTransitionView:(id)a0;
- (void)restoreViewProvider:(id)a0;
- (void)calculateConvertedFrame:(id)a0;
- (void)notifyFromViewProvider:(id)a0;
- (void)notifyToViewProvider:(id)a0;
- (void).cxx_destruct;
- (void)startTransition;
- (void)updateTransition:(double)a0;
- (void)finishTransition;

@end
