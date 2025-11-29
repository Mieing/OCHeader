@class HybridResourceConfig, NSMutableDictionary, IESForestConfig;

@interface HybridForestConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *prefixList;
@property (retain, nonatomic) IESForestConfig *forestConfig;
@property (readonly, nonatomic) NSMutableDictionary *falconPrefixList;
@property (retain, nonatomic) HybridResourceConfig *resourceConfig;

- (void)updateForestConfig;
- (void).cxx_destruct;
- (id)init;

@end
