@class NSArray, NSString, NSDictionary, NSNumber;

@interface IESECGoodsRecommendResponse : IESECBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *recommendItemModelArray;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *recommendInfoString;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendItemModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
