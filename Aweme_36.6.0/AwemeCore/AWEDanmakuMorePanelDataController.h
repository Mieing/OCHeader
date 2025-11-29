@class NSArray, AWEVideoPlayDanmakuModel, AWEAwemeModel;
@protocol AWEDanmakuMorePanelDelegate;

@interface AWEDanmakuMorePanelDataController : NSObject

@property (retain, nonatomic) NSArray *sectionList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (weak, nonatomic) id<AWEDanmakuMorePanelDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEDanmakuInputControllerAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEDanmakuInputControllerAdapter;
- (id)danmakuCopyCellModel;
- (id)danmakuReportCellModelWithDanmakuModel:(id)a0;
- (id)danmakuSwitchCellModel;
- (id)danmakuSettingsCellModel;
- (id)danmakuManagerCellModel;
- (id)toastForTurnOffDanmakuSwitch;
- (void)updateWithAwemeModel:(id)a0 danmakuModel:(id)a1;
- (id)cellModelWithIndexPath:(id)a0;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
