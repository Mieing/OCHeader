@interface MegaVideoFinderPreloadObjectInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (nonatomic) float interestFactor;

+ (void)initialize;

- (void)setInterestFactor:(float)a0;
- (float)interestFactor;
- (void)setFeedId:(unsigned long long)a0;
- (unsigned long long)feedId;

@end
