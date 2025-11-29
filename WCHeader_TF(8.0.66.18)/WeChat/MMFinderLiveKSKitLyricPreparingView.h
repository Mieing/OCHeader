@class NSMutableArray;

@interface MMFinderLiveKSKitLyricPreparingView : UIView

@property (nonatomic) BOOL isStartCountDown;
@property (nonatomic) int countDownSeconds;
@property (nonatomic) int remainSeconds;
@property (retain, nonatomic) NSMutableArray *countDowntDotList;
@property (nonatomic) BOOL isStartPrepare;
@property (copy, nonatomic) id /* block */ prepareEndCallback;

- (id)init;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initCountDownDots;
- (id)createCountDownDot;
- (id)getValidCountDownDots;
- (void)resetCountDownDots;
- (void)refreshCountDownDotsIfNeed;
- (double)preferHeight;
- (void)startPrepare;
- (void)stopPrepare;
- (void)endPrepare;
- (BOOL)isPrepareStart;
- (void)updateMaxPreparingMs:(int)a0;
- (void)updatePreparingRemainMs:(int)a0;
- (void)checkCountDownIsStart;
- (void)checkPrepareIsEnd;
- (void).cxx_destruct;

@end
