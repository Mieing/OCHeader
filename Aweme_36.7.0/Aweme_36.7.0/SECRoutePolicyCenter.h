@protocol SECRoutePolicyProtocol;

@interface SECRoutePolicyCenter : NSObject

@property (retain, nonatomic) id<SECRoutePolicyProtocol> policy;

+ (id)sharedCenter;

- (id)protect:(id)a0;
- (id)riskLevelOf:(id)a0;
- (id)sceneDetect:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
