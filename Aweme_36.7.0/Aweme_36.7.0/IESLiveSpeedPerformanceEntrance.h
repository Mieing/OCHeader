@class UIView, IESLiveMoreToolsSettingItem;

@interface IESLiveSpeedPerformanceEntrance : NSObject

@property (retain, nonatomic) IESLiveMoreToolsSettingItem *smoothLive;
@property (retain, nonatomic) UIView *attachedView;
@property (retain, nonatomic) UIView *tipsView;
@property (copy, nonatomic) id /* block */ imageSoundSwitchBlock;
@property (copy, nonatomic) id /* block */ liveFunctionSwitchBlock;

- (id)prepareSmoothItem;
- (void)imageSoundSwitchChanged:(id)a0;
- (void)liveFunctionSwitchChanged:(id)a0;
- (void)prepareSubItemsWithWidth:(double)a0;
- (void)showTips:(id)a0 withWidth:(double)a1;
- (void).cxx_destruct;

@end
