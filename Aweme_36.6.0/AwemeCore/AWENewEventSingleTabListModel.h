@class NSString, NSArray;

@interface AWENewEventSingleTabListModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *nextTimelineID;
@property (copy, nonatomic) NSArray *eventList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)eventListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
