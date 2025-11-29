@class NSTimer, AWEPerfFMPCalculateConfig, UIView, NSDate, AWEPerfFMPGestureRecognizer, NSMutableDictionary, NSString, NSMutableArray;
@protocol AWEPerfFMPCalculateDelegate;

@interface AWEPerfFMPCalculator : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isCalculating;
@property (nonatomic) BOOL timeoutCancelled;
@property (nonatomic) int screenWidth;
@property (nonatomic) int screenHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenBounds;
@property (nonatomic) double startTime;
@property (nonatomic) double lastRenderTime;
@property (nonatomic) double fmpDuration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) int totalCalculateCount;
@property (nonatomic) char *widthBitMap;
@property (nonatomic) char *heightBitMap;
@property (retain, nonatomic) NSMutableDictionary *fmpCurrentViewDictionary;
@property (retain, nonatomic) NSMutableDictionary *fmpFinalViewDictionary;
@property (retain, nonatomic) NSDate *firstDate;
@property (retain, nonatomic) NSDate *secondDate;
@property (weak, nonatomic) UIView *currentCalculateView;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) AWEPerfFMPGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSMutableArray *meaningfulClasses;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (retain, nonatomic) NSTimer *completedTimer;
@property (retain, nonatomic) NSMutableDictionary *lastRenderInfos;
@property (retain, nonatomic) NSTimer *scheduledTimer;
@property (nonatomic) BOOL shouldUpdateRecord;
@property (nonatomic) double timeThreshold;
@property (retain, nonatomic) AWEPerfFMPCalculateConfig *config;
@property (weak, nonatomic) id<AWEPerfFMPCalculateDelegate> delegate;
@property (nonatomic) BOOL respondToGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)calculateFMPForView:(id)a0 startTime:(double)a1 completion:(id /* block */)a2;
- (void)userInteractionHappened;
- (void)layoutHappened;
- (void)updateRecordWithInnerFMPForView:(id)a0 offsetX:(double)a1 offsetY:(double)a2 widthBitMap:(char *)a3 heightBitMap:(char *)a4;
- (void)updateFMPRecordForView:(id)a0 offsetX:(double)a1 offsetY:(double)a2 nodeTag:(id)a3;
- (void)cancelPerformTimeout;
- (void)performCompletedAfterDelay:(double)a0;
- (void)configFmpDate;
- (BOOL)isMeaningfulClasses:(id)a0;
- (void)updateRecordForSubviewsForView:(id)a0 offsetX:(double)a1 offsetY:(double)a2 nodeTag:(id)a3;
- (void)calculateInnerFMPForView:(id)a0 currentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 innerWidthBitMap:(const char *)a2 innerHeightBitMap:(const char *)a3;
- (void)calculateCompleted;
- (id)findArrayDifferenceWithDic:(id)a0 andDic:(id)a1;
- (void)stopFMPCalculate;
- (id)getFmpDateDiff;
- (void)calculateCompletedWithResult:(unsigned long long)a0;
- (void)resetCalculate;
- (void)performTimeoutAfterDelay:(double)a0;
- (void)updateRecordIfNeed;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)dealloc;
- (void)calculateTimeout;

@end
