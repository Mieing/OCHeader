@class NSDictionary, NSArray, NSString;

@interface AWEColdLaunchAdjustVolumePortraitManager : NSObject

@property (copy, nonatomic) NSDictionary *portraitPersistBlockMap;
@property (copy, nonatomic) NSArray *portraitsList;
@property (readonly, copy, nonatomic) NSString *portraitAge;
@property (readonly, nonatomic) double portraitVolumeAverage;
@property (readonly, nonatomic) double portraitVolumeStandardDeviation;

+ (id)sharedInstance;

- (void)persistPortraits;
- (id /* block */)persistAgePortraitBlock;
- (id /* block */)persistVolumeAverageBlock;
- (id /* block */)persistVolumeStandardDeviationBlock;
- (void).cxx_destruct;

@end
