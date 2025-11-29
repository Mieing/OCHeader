@class UILabel;

@interface WCTSettingDescSelectView : WCTSettingSelectView

@property (retain, nonatomic) UILabel *descLabel;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (void)loadUI:(id)a0;
- (void).cxx_destruct;

@end
