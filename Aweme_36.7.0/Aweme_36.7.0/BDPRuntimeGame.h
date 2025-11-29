@class NSString;

@interface BDPRuntimeGame : BDPRuntime <BDPObjectReusable, BDPRuntimePredefineProtocol>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *mpLoadEventKey;
@property (nonatomic) long long enginePreloadCost;
@property (nonatomic) BOOL hasPreloadEngine;
@property (retain, nonatomic) NSString *tmgException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *frontendSDKVersion;
@property long long predefineCount;
@property double predefineDuration;
@property (retain, nonatomic) NSString *predefineIdentifier;
@property (nonatomic) long long validFileCount;
@property (nonatomic) long long validFileSize;

- (void)willRelease;
- (void)willRecycle;
- (id)initWithType:(long long)a0 completeBlk:(id /* block */)a1;
- (void)preloadGameEngineWithCaller:(id)a0;
- (void)updateUniqueID:(id)a0;
- (id)clearPredefineJSScript;
- (BOOL)enableRecycle;
- (BOOL)enablePreloadEngineWithCaller:(id)a0;
- (void)setupGameContext;
- (void)eventMpJsLoadStart;
- (void)setPluginGroup;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (void)dealloc;

@end
