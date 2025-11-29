@class NSString, NSArray;

@interface AWEBindGuideTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *bindType;
@property (nonatomic) long long popupTotalTimes;
@property (nonatomic) long long popupInterval;
@property (copy, nonatomic) NSArray *sceneList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
