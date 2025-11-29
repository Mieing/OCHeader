@class NSArray, NSString;

@interface AWESearchHorizontalLoadmoreResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *awemeListDic;
@property (copy, nonatomic) NSString *rawDataDiff;
@property (nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
