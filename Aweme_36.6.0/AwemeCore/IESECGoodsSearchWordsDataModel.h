@class NSArray, NSString;

@interface IESECGoodsSearchWordsDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *wordsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
