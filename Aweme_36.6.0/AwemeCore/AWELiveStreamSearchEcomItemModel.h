@class NSString, NSDictionary, NSArray;

@interface AWELiveStreamSearchEcomItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *hideWords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
