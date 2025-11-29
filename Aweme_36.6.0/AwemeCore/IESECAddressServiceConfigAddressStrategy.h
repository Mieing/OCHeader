@class NSArray, IESECAddressServiceAddressBTMTraceConfig, NSString;

@interface IESECAddressServiceConfigAddressStrategy : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *mainBTMList;
@property (copy, nonatomic) NSArray *ruleList;
@property (retain, nonatomic) IESECAddressServiceAddressBTMTraceConfig *btmTraceConfig;
@property (nonatomic) BOOL useVirtualStack;
@property (nonatomic) long long virtualStackSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainBTMListJSONTransformer;
+ (id)ruleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
