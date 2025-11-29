@class NSString, NSArray;

@interface AWEMVChannelFeedIndexFeatureConfig : NSObject

@property (copy, nonatomic) NSString *featureName;
@property (nonatomic) BOOL isStrictSessionMode;
@property (copy, nonatomic) NSArray *feedIndexInitPullTypeList;
@property (copy, nonatomic) NSArray *feedIndexIncreasePullTypeList;

- (void).cxx_destruct;

@end
