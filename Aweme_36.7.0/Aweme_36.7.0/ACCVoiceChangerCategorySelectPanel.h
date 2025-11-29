@class NSString, NSMutableDictionary;

@interface ACCVoiceChangerCategorySelectPanel : ACCVoiceEffectSelectPanel <ACCPanelViewProtocol>

@property (retain, nonatomic) NSMutableDictionary *preProcessCacheDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (void)panelInitVar;
- (void).cxx_destruct;
- (void *)identifier;
- (id)panelName;

@end
