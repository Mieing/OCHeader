@class NSString, IESLiveStreamPlayerPluginMetaInfo, IESLiveStreamPlayerPluginContext;
@protocol IESLiveStreamPlayerBizHostProtocol;

@interface IESLiveStreamPlayerBasePlugin : NSObject <IESLiveStreamPlayerBasePluginConvenienceProtocol, IESLiveStreamPlayerBasePluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveStreamPlayerPluginMetaInfo *metaInfo;
@property (weak, nonatomic) id<IESLiveStreamPlayerBizHostProtocol> bizHost;
@property (retain, nonatomic) IESLiveStreamPlayerPluginContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (id)roomModel;
- (id)layoutMachine;
- (void)logEvent:(id)a0 callTrace:(id)a1 params:(id)a2;
- (id)getPullData;
- (BOOL)needExclusiveProtocol;
- (void).cxx_destruct;
- (id)player;

@end
