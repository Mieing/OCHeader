@class NSArray, NSString, NSDictionary;

@interface IESECGoodsCommentPageResponse : IESECBaseApiModel

@property (retain, nonatomic) NSArray *statModelArray;
@property (retain, nonatomic) NSArray *tagModelArray;
@property (retain, nonatomic) NSArray *skuModelArray;
@property (retain, nonatomic) NSArray *extendTagArray;
@property (copy, nonatomic) NSString *productName;
@property (nonatomic) unsigned long long meaninglessCount;
@property (nonatomic) BOOL isAllCommentSectionSelected;
@property (copy, nonatomic) NSDictionary *logMap;

+ (id)skuModelArrayJSONTransformer;
+ (id)statModelArrayJSONTransformer;
+ (id)tagModelArrayJSONTransformer;
+ (id)extendTagArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
