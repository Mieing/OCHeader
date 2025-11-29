@class NSArray, NSString;

@interface IESECGoodsSearchWordResponse : IESECBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *searchData;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
