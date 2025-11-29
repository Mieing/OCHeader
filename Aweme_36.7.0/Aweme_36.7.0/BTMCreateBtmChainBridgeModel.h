@class NSString, NSArray, NSDictionary;

@interface BTMCreateBtmChainBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL addBtmChain;
@property (nonatomic) long long chainLength;
@property (copy, nonatomic) NSArray *targetPages;
@property (copy, nonatomic) NSDictionary *bcmDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
