@interface AWEIMInvalidExposureInfoModel : AWEIMRecentSharedInfoModel

@property (nonatomic) long long invalidExposureCount;
@property (nonatomic) double lastInvalidExposureTime;

- (id)initWithInfoModel:(id)a0;
- (id)initWithShareModel:(id)a0;
- (id)toDictionary;
- (id)initWithDict:(id)a0;

@end
