@class AWEECMallBubbleModel, AWEECFeedMallBubbleActionLimit, AWEAwemeModel, AWEECJumpToMallContextModel;

@interface AWEECFeedMallBubbleAction : NSObject

@property (retain, nonatomic) AWEECMallBubbleModel *showingBubble;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEECFeedMallBubbleActionLimit *limit;
@property (nonatomic) BOOL isPureMode;
@property (nonatomic) BOOL feedVCShowing;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) AWEECJumpToMallContextModel *bubbleGrassContext;

+ (id)mallBubbleActionWithContextModel:(id)a0 error:(id *)a1;

- (id)bubbleTitle;
- (id)initWithContextModel:(id)a0;
- (void)checkCanStart;
- (void)hideMallBubble;
- (void)markPureModeChange:(BOOL)a0;
- (void)markFeedVCShowing;
- (void)activeWithCompletion:(id /* block */)a0 didClick:(id /* block */)a1;
- (void)enterMallWithParams:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
