@class NSString;
@protocol AWEMessageReachPluginAbilityProtocol, AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachFrameAbilityImp : NSObject <AWEMessageReachFrameAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (weak, nonatomic) id<AWEMessageReachPluginAbilityProtocol> channelPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearMessageReachAllStatus:(id)a0;
- (id)initWithConfig:(id)a0 channelPlugin:(id)a1;
- (void).cxx_destruct;

@end
