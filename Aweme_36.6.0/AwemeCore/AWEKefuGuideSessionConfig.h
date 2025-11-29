@class AWEKefuGuideProtectControlConfig, NSString, AWEKefuGuideRTCConnectConfig, AWEKefuGuideActionControlConfig, NSDictionary, NSObject;
@protocol BDXBridgeContainerProtocol;

@interface AWEKefuGuideSessionConfig : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (retain, nonatomic) AWEKefuGuideRTCConnectConfig *connectConfig;
@property (retain, nonatomic) AWEKefuGuideProtectControlConfig *protectConfig;
@property (retain, nonatomic) AWEKefuGuideActionControlConfig *actionConfig;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSObject<BDXBridgeContainerProtocol> *bridgeContainer;

- (void).cxx_destruct;

@end
