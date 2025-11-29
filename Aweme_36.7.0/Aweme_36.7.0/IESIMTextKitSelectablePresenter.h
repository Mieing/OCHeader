@class NSString, IESIMTextKitSelectable;
@protocol AWEIMSelectableLabelAction;

@interface IESIMTextKitSelectablePresenter : IESIMTextKitLabelPresenter <IESIMTextKitSelectableDelegate, AWEIMSelectableLabelPresenterProtocol>

@property (retain, nonatomic) IESIMTextKitSelectable *selectable;
@property (weak, nonatomic) id<AWEIMSelectableLabelAction> action;
@property (copy, nonatomic) id /* block */ selectedStringCustomBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didEndTextSelectWithStartLocation:(struct CGPoint { double x0; double x1; })a0 lowLocation:(struct CGPoint { double x0; double x1; })a1 locationInView:(id)a2 tryStartLocationFirst:(BOOL)a3;
- (void)didResetTextSelectWithHitPoint:(struct CGPoint { double x0; double x1; })a0 pointInView:(id)a1;
- (void)didStartDraggingGrabber;
- (id)selectedAttributedString;
- (BOOL)isTextPartiallySelected;
- (void)selectFullRangeInContainer:(id)a0 rootView:(id)a1;
- (void)selectFullRangeInContainer:(id)a0;
- (void)resetSelectable;
- (void).cxx_destruct;

@end
