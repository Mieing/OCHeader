@class NSString, BDPUniqueID;

@interface BDPPluginScreenBrightness_HG : BDPBridgeInstancePlugin <BDPApplicationNotificationMessage>

@property (nonatomic) long long setCounts;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) double setBrightness;
@property (nonatomic) double systemBrightness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (void)setScreenBrightnessWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getScreenBrightnessWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
