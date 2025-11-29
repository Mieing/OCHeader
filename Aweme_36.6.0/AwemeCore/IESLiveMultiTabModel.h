@class NSString, IESLiveMultiTabPuzzleLifeProxyer, NSDate, UIView;

@interface IESLiveMultiTabModel : NSObject

@property (retain, nonatomic) NSDate *showTime;
@property (retain, nonatomic) NSString *hideReason;
@property (retain, nonatomic) IESLiveMultiTabPuzzleLifeProxyer *puzzleLifeProxyer;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long tabId;
@property (retain, nonatomic) NSString *tabColor;
@property (nonatomic) long long tabType;
@property (nonatomic) long long tabShowType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) BOOL disablePreload;
@property (nonatomic) BOOL enablePull;
@property (nonatomic) BOOL isShowingRedDot;
@property (nonatomic) BOOL enableLayoutOpt;
@property (copy, nonatomic) id /* block */ redDotShow;
@property (copy, nonatomic) id /* block */ statusChange;
@property (copy, nonatomic) id /* block */ pullPanelAction;
@property (copy, nonatomic) id /* block */ foldPanelAction;
@property (copy, nonatomic) id /* block */ singleTapAction;
@property (copy, nonatomic) id /* block */ doubleTapAction;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ containerViewGetBlock;
@property (copy, nonatomic) id /* block */ containerDidShow;
@property (copy, nonatomic) id /* block */ containerDidHide;
@property (copy, nonatomic) id /* block */ didScrollToContainer;
@property (nonatomic) double tabInitTimestamp;
@property (nonatomic) double tabLoadSuccessTimestamp;
@property (nonatomic) double tabLoadFailTimestamp;
@property (nonatomic) BOOL bubbleSwitch;
@property (nonatomic) long long bubbleID;
@property (nonatomic) long long bubbleDelayTime;
@property (nonatomic) long long bubbleDuration;
@property (retain, nonatomic) NSString *bubbleText;

- (void).cxx_destruct;
- (id)init;

@end
