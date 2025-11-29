@class NSArray, NSString;

@interface AWEAIGCAsyncTaskQueryStateResponseModel : ACCBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *generationList;
@property (copy, nonatomic) NSArray *dataList;
@property (copy, nonatomic) NSArray *taskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataListJSONTransformer;
+ (id)taskListJSONTransformer;
+ (id)generationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
