@class AWEPlayInteractionContext, AWEAwemeModel, UILabel, AWERecommendEntryEditView;

@interface AWERecommendEntryCoverView : UIView

@property (nonatomic) double startX;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) BOOL hasTriggered;
@property (nonatomic) BOOL hasExit;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERecommendEntryEditView *editView;
@property (nonatomic) double entryCenterY;
@property (nonatomic) double topBoundary;
@property (nonatomic) double bottomBoundary;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } entryFrame;
@property (nonatomic) double elementHeight;

- (void)exitEditMode;
- (double)getMarginTop;
- (double)getMarginBottom;
- (void)changeTipsByDeltaX:(double)a0;
- (void)changeFrameByDeltaY:(double)a0;
- (void)changeEntranceByDeltaX:(double)a0;
- (BOOL)couldLeftHide;
- (long long)getTipsThreshold;
- (long long)getHideThreshold;
- (long long)getWeakThreshold;
- (BOOL)couldRightWeak;
- (void)dragEditView:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)initUI;

@end
