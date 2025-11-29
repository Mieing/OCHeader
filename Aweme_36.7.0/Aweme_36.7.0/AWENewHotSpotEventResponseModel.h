@class NSString, NSArray;

@interface AWENewHotSpotEventResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *timelineID;
@property (copy, nonatomic) NSArray *tabList;
@property (copy, nonatomic) NSString *pageID;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
