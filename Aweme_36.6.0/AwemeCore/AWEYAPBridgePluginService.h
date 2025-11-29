@class AWEYAPBridgePluginEngine, NSString;

@interface AWEYAPBridgePluginService : HTSService <AWEYAPBridgePluginService>

@property (retain, nonatomic) AWEYAPBridgePluginEngine *globalBridgeEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
