@class NSNumber, NSString;

@interface BDXBridgeGetCurrentGCJLocationMethodParamModelForDiscover : BDXBridgeModel <BDXBridgeGetCurrentGCJLocationMethodParamModelProtocol>

@property (retain, nonatomic) NSNumber *silent;
@property (copy, nonatomic) NSString *forceLocateAuth;
@property (nonatomic) long long forceLocate;
@property (nonatomic) long long isLegitimate;
@property (nonatomic) long long forceLocateImmediate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
