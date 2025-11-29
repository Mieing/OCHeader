@class NSString, NSArray;

@interface AWEFeedIndexFeatureConfig : NSObject

@property (copy, nonatomic) NSString *featureName;
@property (nonatomic) BOOL isStrictSessionMode;
@property (copy, nonatomic) NSArray *feedIndexInitPullTypeList;
@property (copy, nonatomic) NSArray *feedIndexIncreasePullTypeList;

- (void).cxx_destruct;

@end
