@class NSString;

@interface IESLiveAudiencePublicScreenSettingView : IESLivePublicScreenSettingView {
    unsigned long long _curHeightType;
}

@property (copy, nonatomic) id /* block */ enableHeightSetting;
@property (nonatomic) double lowLevelScale;
@property (nonatomic) double midLevelScale;
@property (nonatomic) double higLevelScale;
@property (copy, nonatomic) NSString *enterForm;
@property (nonatomic) long long publicScreenConsumeLevel;

- (void)layoutDoneButton;
- (void)setCurHeightType:(unsigned long long)a0;
- (void)checkIfEnableHeightSetting;
- (unsigned long long)curHeightType;
- (void)trackWhenQuit;
- (id)initWithDIContext:(id)a0 initialFontSizeType:(unsigned long long)a1 initialHeightType:(unsigned long long)a2;
- (double)bottomViewTop;
- (void)curPointChanged:(double)a0 button:(id)a1;
- (void)trackWhenDoneButtonClicked;
- (void)trackWhenCloseButtonClicked;
- (void)updateConstAndExpendHeight;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;
- (void)setupConfig;

@end
