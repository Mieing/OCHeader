@class NSNumber, AWEUserModel;

@interface AWEOneDayUserStoryLiveModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) AWEUserModel *owner;

+ (id)ownerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
