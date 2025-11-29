@class NSString, NSDictionary, Pitaya, PTYSetupInfo;

@interface LSSPitayaEngine : NSObject {
    PTYSetupInfo *_pitayaSetupInfo;
    BOOL _hasPitayaInit;
}

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) Pitaya *pitayaInstance;

+ (id)sharedPitayaEngine;

- (BOOL)isPitayaReady;
- (void)removeMessageHandler:(id)a0;
- (id)appChannel;
- (void)registerAppLogRunEvent:(id)a0 callback:(id /* block */)a1;
- (BOOL)hasInitPitaya;
- (void)initPitayaEngine:(id)a0 appId:(id)a1 appVersion:(id)a2;
- (void)runPacket:(id)a0 params:(id)a1 runCallback:(id /* block */)a2 async:(BOOL)a3;
- (void)initPitaya;
- (void)requestPacket:(id)a0 download:(BOOL)a1 callback:(id /* block */)a2;
- (void)requestPacketAll;
- (void)queryPacket:(id)a0 callback:(id /* block */)a1;
- (void)downloadPacket:(id)a0 callbakc:(id /* block */)a1;
- (void)registerMessageHandler:(id)a0 handler:(id /* block */)a1;
- (void)removeAppLogEvent:(id)a0;
- (id)userID;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)deviceID;
- (void)dealloc;
- (BOOL)isDebugMode;
- (id)initInstance;

@end
