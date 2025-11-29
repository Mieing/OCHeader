@class NSNumber, AWEUserModel;

@interface AWEOneDayUserStoryLiveModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) AWEUserModel *owner;
@property (nonatomic) long long roomOrderType;

+ (id)ownerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
