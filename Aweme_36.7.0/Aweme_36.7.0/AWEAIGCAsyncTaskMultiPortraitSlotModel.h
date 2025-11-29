@class NSString, AWEURLModel;

@interface AWEAIGCAsyncTaskMultiPortraitSlotModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long userId;
@property (nonatomic) long long roleType;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) AWEURLModel *modelCover;
@property (nonatomic) long long avgAge;
@property (copy, nonatomic) NSString *gender;
@property (nonatomic) long long modelStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
