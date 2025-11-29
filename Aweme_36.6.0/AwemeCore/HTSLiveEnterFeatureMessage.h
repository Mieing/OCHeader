@class GPBInt32ObjectDictionary;

@interface HTSLiveEnterFeatureMessage : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) long long userId;
@property (retain, nonatomic) GPBInt32ObjectDictionary *enterFeatures;
@property (readonly, nonatomic) unsigned long long enterFeatures_Count;

+ (id)descriptor;

@end
