@class NSMutableArray;

@interface GameLifeSettingControl_AttachBarControl : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *appPanelList;
@property (retain, nonatomic) NSMutableArray *staticPanelList;

+ (void)initialize;

- (void)setStaticPanelList:(id)a0;
- (id)staticPanelList;
- (void)setAppPanelList:(id)a0;
- (id)appPanelList;

@end
