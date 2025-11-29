@interface IESLiveInteractiveSignalConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long pathType;
@property (nonatomic) BOOL customSendSignal;

- (unsigned long long)subScene;
- (id)initWithScene:(unsigned long long)a0 pathType:(unsigned long long)a1;
- (void)switchWithScene:(unsigned long long)a0 pathType:(unsigned long long)a1;
- (id)subBasePath;
- (id)mapBasePath;
- (Class)responseClass;

@end
