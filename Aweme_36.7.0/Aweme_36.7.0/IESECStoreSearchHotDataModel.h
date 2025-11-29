@class NSArray, NSString;

@interface IESECStoreSearchHotDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *words;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
