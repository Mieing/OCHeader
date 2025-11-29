@interface IESLiveNinepatchInfo : IESLiveDynamicMTLModel

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } flexSetting;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textSetting;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ninepatchSettingFromSettingArray:(id)a0;
- (id)initWithFlexDictionary:(id)a0;
- (id)initWithFlexSettingArray:(id)a0 textSettingArray:(id)a1;

@end
