@class NSMutableArray;

@interface GameLifeSettingControl_StaticPanel : WXPBGeneratedMessage

@property (nonatomic) unsigned int panelType;
@property (retain, nonatomic) NSMutableArray *disableWordList;

+ (void)initialize;

- (void)setDisableWordList:(id)a0;
- (id)disableWordList;
- (void)setPanelType:(unsigned int)a0;
- (unsigned int)panelType;

@end
