@class NSArray, BDPlatformAuthParamsModel, AWEOpenPlatformAuthFlowManager;
@protocol AWEOpenAuthInfoScopeLevelItemDataProtocol;

@interface AWEOpenPlatformAuthIdentityConfiguration : NSObject

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (copy, nonatomic) NSArray *scopeItems;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> scopeModel;
@property (nonatomic) unsigned long long scopeType;
@property (retain, nonatomic) BDPlatformAuthParamsModel *authParamsModel;
@property (nonatomic) unsigned long long authScene;
@property (copy, nonatomic) id /* block */ bridgeAuthCompletionBlock;

- (void).cxx_destruct;

@end
