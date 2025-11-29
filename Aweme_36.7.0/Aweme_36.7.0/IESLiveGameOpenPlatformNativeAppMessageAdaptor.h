@class NSString, IESLiveNativeAppApi, NSMutableDictionary;

@interface IESLiveGameOpenPlatformNativeAppMessageAdaptor : NSObject

@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveNativeAppApi *bridgeAPI;
@property (retain, nonatomic) NSMutableDictionary *openCapabilitys;
@property (copy, nonatomic) NSString *appID;

- (id)anchorRegisterMethods;
- (id)audienceRegisterMethods;
- (BOOL)shouldEnableInvocation:(id)a0;
- (void)getRoomInfoWithArguments:(id)a0 completion:(id /* block */)a1;
- (void)getUserInfoWithArguments:(id)a0 completion:(id /* block */)a1;
- (id)commonRegisterMethods;
- (id)initWithAppID:(id)a0 diContext:(id)a1;
- (void)updateOpenCapabilityList:(id)a0;
- (void)didReceiveMessageFromContainer:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
