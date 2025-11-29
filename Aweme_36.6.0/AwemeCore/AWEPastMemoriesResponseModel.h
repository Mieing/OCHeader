@class NSArray, NSString;

@interface AWEPastMemoriesResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *awemeModels;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
