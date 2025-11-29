@class NSDictionary, NSMutableSet, NSMutableDictionary;
@protocol IESLiveBootloaderAdapter, IESLiveBootableModel;

@interface IESLiveComponentStageDynamicFilter : NSObject

@property (nonatomic) unsigned long long currentScene;
@property (weak, nonatomic) id<IESLiveBootableModel> roomModel;
@property (retain, nonatomic) NSMutableSet *filterArray;
@property (retain, nonatomic) NSMutableDictionary *dynamicConfigs;
@property (retain, nonatomic) id<IESLiveBootloaderAdapter> bootloaderAdapter;
@property (nonatomic) BOOL blockEnable;
@property (retain, nonatomic) NSDictionary *blockMap;

- (id)initWithScene:(unsigned long long)a0 diContext:(id)a1;
- (long long)showCartWithRoom:(id)a0;
- (BOOL)blockWithComponent:(id)a0 sceneKey:(id)a1;
- (void)recordRoomModel:(id)a0;
- (id)bootLevelWithComponentName:(id)a0;
- (id)sortLevel:(long long)a0 components:(id)a1;
- (void)setUpConfigs;
- (id)localDynamicConfig;
- (id)configWithcomponent:(id)a0;
- (id)adjustWithLevel:(long long)a0 components:(id)a1;
- (void).cxx_destruct;

@end
