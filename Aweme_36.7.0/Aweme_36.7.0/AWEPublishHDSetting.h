@class NSString, IESVideoInfoProvider;

@interface AWEPublishHDSetting : NSObject <IESAVAssetAsynchronousLoaderDelegate, ACCHDSettingProtocol>

@property (retain, nonatomic) IESVideoInfoProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableWithModel:(id)a0;
+ (BOOL)bubbleShowed;
+ (void)setBubbleShowed:(BOOL)a0;
+ (id)userCurrentStateDescription;
+ (BOOL)hasHDState;
+ (BOOL)HDState;
+ (void)setHDState:(BOOL)a0;
+ (void)userToggleState:(BOOL)a0;
+ (BOOL)userCurrentState;
+ (BOOL)userCurrentStateWithModel:(id)a0;
+ (void)handleStateChange:(BOOL)a0 model:(id)a1;
+ (void)checkHDAssetCountWithAssets:(id)a0 completion:(id /* block */)a1;
+ (id)p_HDSaveKey;
+ (id)p_subscription;
+ (BOOL)enable;
+ (void)addSubscriber:(id)a0;
+ (void)removeSubscriber:(id)a0;
+ (BOOL)defaultState;
+ (void)setToggled:(BOOL)a0;
+ (BOOL)toggled;

- (id)automaticallyLoadedAssetKeysAtIndex:(unsigned long long)a0;
- (void)fetchHDAssetsCountWithAssets:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
