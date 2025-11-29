@class NSMutableArray, GameCenterTabSettingControl_TabConfiguration;

@interface GameCenterTabSettingControl : WXPBGeneratedMessage

@property (retain, nonatomic) GameCenterTabSettingControl_TabConfiguration *tab;
@property (retain, nonatomic) NSMutableArray *tabStyleList;
@property (nonatomic) BOOL tabStyleDisabled;
@property (nonatomic) BOOL downloadIconDisabled;
@property (nonatomic) BOOL enableExternPage;

+ (void)initialize;

- (void)setEnableExternPage:(BOOL)a0;
- (BOOL)enableExternPage;
- (void)setDownloadIconDisabled:(BOOL)a0;
- (BOOL)downloadIconDisabled;
- (void)setTabStyleDisabled:(BOOL)a0;
- (BOOL)tabStyleDisabled;
- (void)setTabStyleList:(id)a0;
- (id)tabStyleList;
- (void)setTab:(id)a0;
- (id)tab;

@end
