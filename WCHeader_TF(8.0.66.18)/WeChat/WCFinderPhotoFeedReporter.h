@class NSMutableArray;

@interface WCFinderPhotoFeedReporter : NSObject

@property (nonatomic) unsigned long long startTimeMs;
@property (nonatomic) unsigned long long durationInMs;
@property (retain, nonatomic) NSMutableArray *items;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelPropertyWhitelistForConfigTag:(id)a0;

- (void)markPhotoFeedStartDisplay;
- (void)markPhotoFeedEndDisplay;
- (void)clearAllData;
- (void)shufflToNewIndex:(unsigned long long)a0 comeWay:(unsigned long long)a1;
- (void)markCurrentPhotoHasPause;
- (id)genReportData;
- (long long)getLastReportPage;
- (void).cxx_destruct;

@end
