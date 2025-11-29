@class NSString, NSMutableArray;
@protocol IESLivePlayerProtocol;

@interface IESLivePlayerPlayDurationTracker : NSObject

@property (retain, nonatomic) NSMutableArray *eventList;
@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) BOOL viewVisible;
@property (nonatomic) BOOL isFirstFramed;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;

- (void)onFirstFrame;
- (void)enterSmallWindow;
- (void)exitSmallWindow;
- (void)playWithTriggerReason:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)clear;
- (void)didEnterBackground;
- (id)init;
- (void)addEvent:(id)a0;
- (void)viewWillAppear;
- (void)didEnterForeground;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (id)calculate;

@end
