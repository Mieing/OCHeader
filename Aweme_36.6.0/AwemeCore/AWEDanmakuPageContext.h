@class NSString, NSDictionary, NSMutableDictionary, AWEDanmakuCommonDataInfo, AWEAwemeModel, AWEVideoPlayDanmakuModel;
@protocol AWEDanmakuBaseControllerDelegate, AWEDanmakuContainerInnerCommunicateProtocol, AWEDanmakuModuleDIProtocol;

@interface AWEDanmakuPageContext : AWEPageContext <AWEDanmakuPageContextProtocol>

@property (nonatomic) BOOL useCommonDanmakuSwitch;
@property (retain, nonatomic) AWEDanmakuCommonDataInfo *dataInfo;
@property (weak, nonatomic) id<AWEDanmakuBaseControllerDelegate> delegate;
@property (nonatomic) long long danmakuPlayerStatus;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *logExtraForDanmakuSettingPanel;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL isFromMessageDetailVideo;
@property (copy, nonatomic) NSDictionary *messageDetailVideoParams;
@property (nonatomic) long long sceneType;
@property (weak, nonatomic) id<AWEDanmakuContainerInnerCommunicateProtocol> danmakuContainer;
@property (retain, nonatomic) NSMutableDictionary *emptyMonitorParams;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (nonatomic) BOOL isDanmakuContainerHidden;
@property (weak, nonatomic) id<AWEDanmakuModuleDIProtocol> DI;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *currentDiggedDanmaku;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addKey:(id)a0 handler:(id /* block */)a1;
- (void)postForKey:(id)a0;
- (void)updateEmptyMonitorParamsIfNeedWithWasteType:(long long)a0 extraParam:(id)a1;
- (void)removeCacheModelWithFromTime:(double)a0 toTime:(double)a1;
- (id)initWithUseCommonDanmakuSwitch:(BOOL)a0;
- (long long)currentDanmakuEmptySceneType;
- (void)updateEmptyMonitorParamsWithWasteType:(long long)a0 emptySceneType:(long long)a1;
- (void)handleEmptyMonitoWithParam:(id)a0;
- (id)strDescriptionForEmptySceneType:(long long)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;

@end
