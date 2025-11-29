@class NSString, AWEStudioRecordCinemaLayoutAnimationImpl, NSHashTable;
@protocol AWEStudioRecordCinemaLayoutConstant;

@interface AWEStudioRecordCinemaModeViewModel : NSObject <AWEStudioRecordCinemaRuntimeService>

@property (retain, nonatomic) NSHashTable *views;
@property (retain, nonatomic) id<AWEStudioRecordCinemaLayoutConstant> layoutConstant;
@property (retain, nonatomic) AWEStudioRecordCinemaLayoutAnimationImpl *animationManager;
@property (copy, nonatomic) id /* block */ topBarMorePanelIsVisibleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)recordSideButtonAlpha;
- (BOOL)isTopBarMorePanelVisible;
- (void)layoutWithBlock:(id /* block */)a0 animated:(BOOL)a1;
- (void)layout_recordButton:(id)a0;
- (void)layout_recordExitPropButton:(id)a0;
- (void)layout_recordRightButton:(id)a0;
- (void)layout_recordRightLabel:(id)a0;
- (void)layout_recordLeftFilterButton:(id)a0;
- (void)layout_recordLeftFilterLabel:(id)a0;
- (void)layout_cinemaBackgroundView:(id)a0;
- (void)layout_alphaAnimationWithView:(id)a0 targetAlpha:(double)a1;
- (void)initializeAnimationWithView:(id)a0 status:(id /* block */)a1;
- (id)scaleXValueWithView:(id)a0;
- (void)layout_recordLeftLabel:(id)a0 normalAlpha:(double)a1 cinemaAlpha:(double)a2;
- (void)layout_recordLeftButton:(id)a0 normalAlpha:(double)a1 cinemaAlpha:(double)a2;
- (void)exitCinemaMode_layoutViews:(id)a0 animated:(BOOL)a1;
- (void)enterCinemaMode_layoutViews:(id)a0 animated:(BOOL)a1;
- (id)managerWithView:(id)a0;
- (double)cinemaRecordButtonLabelScale;
- (void)setupAnimationDuration:(id)a0;
- (void)layoutIfNeeded_willChangeToMode:(id)a0 oldMode:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
