@class NSArray;
@protocol AWEDanmakuSettingsPanelDelegate;

@interface AWEDanmakuSettingsViewControllerDataSource : NSObject

@property (retain, nonatomic) NSArray *configModelList;
@property (nonatomic) unsigned long long dataSourceStyle;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<AWEDanmakuSettingsPanelDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)obtainDataSourceWithDanmakuScene:(unsigned long long)a0 dataSourceStyle:(unsigned long long)a1;
- (void)updateDataSourceWithDanmakuScene:(unsigned long long)a0;
- (id)configModelWithIndex:(unsigned long long)a0;
- (id)updateDanmakuAlpha:(double)a0;
- (BOOL)shouldAddDisplayOptionIndexSecond;
- (id)updateDanmakuDisplayArea:(unsigned long long)a0;
- (id)updateDanmakuFontSize:(unsigned long long)a0;
- (id)updateDanmakuShootSpeed:(unsigned long long)a0;
- (double)valuePercent:(double)a0;
- (void).cxx_destruct;
- (long long)numberOfRowsInSection:(long long)a0;

@end
