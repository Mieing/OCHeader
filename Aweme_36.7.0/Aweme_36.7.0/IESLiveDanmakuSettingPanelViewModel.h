@interface IESLiveDanmakuSettingPanelViewModel : NSObject

@property (nonatomic) long long areaType;
@property (nonatomic) long long fontSizeType;
@property (nonatomic) long long alphaPercentValue;
@property (nonatomic) BOOL giftSwitchOn;
@property (nonatomic) BOOL lotterySwitchOn;
@property (copy, nonatomic) id /* block */ outerAreaType;
@property (copy, nonatomic) id /* block */ resetSetting;
@property (copy, nonatomic) id /* block */ giftDanmuSwitch;
@property (copy, nonatomic) id /* block */ lotteryDanmuSwitch;
@property (copy, nonatomic) id /* block */ areaTypeChanged;
@property (copy, nonatomic) id /* block */ fontSizeTpyeChanged;
@property (copy, nonatomic) id /* block */ alphaPercentValueChanged;
@property (copy, nonatomic) id /* block */ alphaPercentValueChangeEnd;

- (void).cxx_destruct;

@end
