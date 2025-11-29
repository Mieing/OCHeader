@class NSString, NSMutableArray, IESEZDanmakuContext;

@interface AWELivePreDanmakuSettingComponent : NSObject <IESEZDanmakuNotificationSubscriber, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSMutableArray *displayingDanmakuData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)prepareStart;
- (void)validateSettingValue:(id)a0 withSettingKey:(id)a1;
- (void)handleAlphaForDanmakuData:(id)a0;
- (void)handleDataSpeedForDanmakuData:(id)a0;
- (void)bindSettingView:(id)a0;
- (void)syncSettingConfiguration;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
