@class NSString;

@interface IESECMallPopupTaskPuzzleHolderView : IESECMallPopupTaskBaseView <PuzzleKitViewLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)kitViewWillDealloc:(id)a0;
- (id)initWithPopupConfig:(id)a0 delegate:(id)a1 uniqueId:(id)a2;
- (void)showInView:(id)a0 zIndex:(long long)a1;
- (void)showInWindowWithZIndex:(long long)a0;
- (void)dismiss;
- (void)dealloc;

@end
