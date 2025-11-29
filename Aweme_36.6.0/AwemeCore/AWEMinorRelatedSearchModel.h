@class NSString, AWEMinorRelatedSearchWordModel;

@interface AWEMinorRelatedSearchModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *prefixTitle;
@property (retain, nonatomic) AWEMinorRelatedSearchWordModel *queryWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryWordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
