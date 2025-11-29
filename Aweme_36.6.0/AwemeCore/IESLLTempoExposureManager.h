@class NSMutableDictionary, IESLLTempoContext, CADisplayLink, IESLLTempoExposureGlobalObserver;

@interface IESLLTempoExposureManager : NSObject {
    id /* block */ _callback;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableDictionary *exposureItemDict;
@property (retain, nonatomic) NSMutableDictionary *exposureStateDict;
@property (nonatomic) long long frameRate;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (nonatomic) BOOL flag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rootViewOldFrame;
@property (weak, nonatomic) IESLLTempoExposureGlobalObserver *exposureGlobalObserver;

- (BOOL)isVisibleView:(id)a0;
- (void)updateExposureItemArray:(id)a0 tempoKey:(id)a1;
- (void)exposureHandler:(id)a0;
- (BOOL)isRootViewChanged;
- (id)getTempoExposureStateWithTempoKey:(id)a0;
- (float)percentageOfUiInWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfUIInWindow:(id)a0;
- (double)getAreaRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 otherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)destroyExposure;
- (void)registerExposureItemArray:(id)a0 tempoKey:(id)a1;
- (void)addExposureToRunLoop;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)removeFromRunLoop;
- (void)dealloc;

@end
