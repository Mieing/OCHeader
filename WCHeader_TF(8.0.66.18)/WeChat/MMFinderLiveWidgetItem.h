@class UIView;

@interface MMFinderLiveWidgetItem : NSObject

@property (nonatomic) BOOL alwaysAtLast;
@property (nonatomic) BOOL hideWhenConnectMic;
@property (nonatomic) double leadForEnterAnimation;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) double prepareToNormalStateDuration;
@property (copy, nonatomic) id /* block */ prepareWeaken;
@property (copy, nonatomic) id /* block */ enterCallback;
@property (copy, nonatomic) id /* block */ changeStateCallback;
@property (copy, nonatomic) id /* block */ changeToEnterStateCallbackForLayoutStyleChange;
@property (copy, nonatomic) id /* block */ changeToNormalStateCallbackForLayoutStyleChange;

- (void).cxx_destruct;

@end
