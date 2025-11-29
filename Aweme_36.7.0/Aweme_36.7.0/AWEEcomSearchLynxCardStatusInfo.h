@class NSNumber;

@interface AWEEcomSearchLynxCardStatusInfo : NSObject

@property (nonatomic) BOOL needForceRefresh;
@property (nonatomic) BOOL isDynamicModelPreprocessed;
@property (nonatomic) double cacheHeight;
@property (nonatomic) double estimatedHeight;
@property (nonatomic) double realHeight;
@property (retain, nonatomic) NSNumber *isCardReuse;

- (void).cxx_destruct;
- (void)reset;

@end
