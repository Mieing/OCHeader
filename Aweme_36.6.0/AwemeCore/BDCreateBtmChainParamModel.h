@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDCreateBtmChainParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL addBtmChain;
@property (retain, nonatomic) NSNumber *chainLength;
@property (copy, nonatomic) NSArray *targetPages;
@property (copy, nonatomic) NSDictionary *bcmDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
