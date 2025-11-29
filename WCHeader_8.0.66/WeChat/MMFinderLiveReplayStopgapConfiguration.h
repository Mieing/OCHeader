@class NSDictionary, NSArray;

@interface MMFinderLiveReplayStopgapConfiguration : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long stopgapId;
@property (nonatomic) unsigned int recommendedQualityLevel;
@property (nonatomic) BOOL forceQualityRecommendation;
@property (retain, nonatomic) NSDictionary *mediaItems;
@property (retain, nonatomic) NSArray *mediaItemsList;

+ (BOOL)stopgapInfoValid:(id)a0;

- (id)initWithStopgapInfo:(id)a0 preloadInfo:(id)a1;
- (id)preferredStopgapMediaItemWithMaximumQuality:(unsigned int)a0 enableH265:(BOOL)a1;
- (void).cxx_destruct;

@end
