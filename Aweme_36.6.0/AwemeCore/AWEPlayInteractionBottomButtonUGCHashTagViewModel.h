@interface AWEPlayInteractionBottomButtonUGCHashTagViewModel : NSObject <BDChainLogNodeHostProtocol, AWEPlayInteractionBottomButtonComponentViewModelProtocol> {
    void /* unknown type, empty encoding */ infoModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ component;
}

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (id)chainLogNodeParams;
- (BOOL)isChainLogGatewayNode;
- (long long)activateType;
- (BOOL)canRespondToTriggerType:(long long)a0;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
