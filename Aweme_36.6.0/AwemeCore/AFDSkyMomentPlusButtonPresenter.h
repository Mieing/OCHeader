@protocol AFDSkyMomentPlusButtonPresenterDelegate;

@interface AFDSkyMomentPlusButtonPresenter : AFDSkylightBasePresenter

@property (weak, nonatomic) id<AFDSkyMomentPlusButtonPresenterDelegate> delegate;

- (unsigned long long)componentViewPosition;
- (void)updateView:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSize;
- (struct CGPoint { double x0; double x1; })componentViewOrigin;
- (void)addButtonActions;
- (void)onPlusButtonClicked:(id)a0;
- (void)onPlusButtonTouched:(id)a0;
- (void)onPlusButtonCancel:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
