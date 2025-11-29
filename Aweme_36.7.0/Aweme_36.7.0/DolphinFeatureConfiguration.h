@interface DolphinFeatureConfiguration : NSObject

@property (nonatomic) long long groupFeatureMaxCnt;
@property (nonatomic) long long singleFeatureMaxCnt;
@property (nonatomic) long long autoClearTimeInterval;

- (id)init;

@end
