@class UITapGestureRecognizer, WCStatTimerHelper, WCAdInteractionReportInfo, CAGradientLayer, WCAdInteractionResourceInfo, UIPanGestureRecognizer, NSMutableArray, WCAdInteractionReportDataHandler;
@protocol WCAdInteractionContentViewDelegate;

@interface WCAdInteractionContentView : MMUIView

@property (weak, nonatomic) id<WCAdInteractionContentViewDelegate> delegate;
@property (retain, nonatomic) WCAdInteractionResourceInfo *resourceInfo;
@property (retain, nonatomic) NSMutableArray *subContentViews;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long contentStatus;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } panInitialCenter;
@property (retain, nonatomic) WCStatTimerHelper *contentTimeHelper;
@property (retain, nonatomic) WCAdInteractionReportInfo *reportInfo;
@property (retain, nonatomic) WCAdInteractionReportDataHandler *customReportHandler;

+ (id)fetchContentViewForResourceInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 delegate:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resourceInfo:(id)a1 delegate:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)fetchResourceInfoWithResourceId:(id)a0;
- (void)insertSubContentView:(id)a0;
- (void)removeSubContentView:(id)a0;
- (void)initializeContentView;
- (void)initializeGesture;
- (void)updateGestureWithActionInfo:(id)a0;
- (void)handlePanGesture:(id)a0;
- (id)fetchDeterminationInfo;
- (BOOL)canBeClicked;
- (BOOL)canBeInteractived;
- (void)handleTap:(id)a0;
- (void)fireTapEvent;
- (struct CGSize { double x0; double x1; })calcAvailableAverageSize;
- (void)organizeSubContentViews;
- (id)fetchFontWithSize:(double)a0 weight:(unsigned long long)a1;
- (void)updateProgressWith:(double)a0;
- (BOOL)activeContentViews;
- (BOOL)suspendContentViews;
- (BOOL)terminateContentViews;
- (BOOL)didContentViewTerminate;
- (void)pauseAllAnimations;
- (void)resumeAllAnimations;
- (void)tryToReportContentAppear;
- (void)tryToReportContentDisappear;
- (void)fetchContentReportInfoIntoDict:(id)a0;
- (void)tryToRecordCustomReportData:(id)a0;
- (void).cxx_destruct;

@end
