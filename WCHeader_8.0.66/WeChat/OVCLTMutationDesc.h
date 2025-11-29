@class NSDictionary, OVCLTMutationKind, OVCLTLayerSpecifier;

@interface OVCLTMutationDesc : NSObject

@property (readonly, nonatomic) OVCLTMutationKind *mutationKind;
@property (readonly, nonatomic) OVCLTLayerSpecifier *ltLayerSpecifier;
@property (readonly, nonatomic) NSDictionary *mutationOptions;

- (id)initWithMutationKind:(id)a0 ltLayerSpecifier:(id)a1 mutationOptions:(id)a2;
- (void).cxx_destruct;

@end
