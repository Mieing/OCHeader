@interface _TtCC10BDChainLog23ChainLogStatisticCenterP33_E2F2AADE98887AEE990D65A06DEB853C9BasicData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long logCount;
@property (nonatomic) double avgLength;

+ (id)avgLengthJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
