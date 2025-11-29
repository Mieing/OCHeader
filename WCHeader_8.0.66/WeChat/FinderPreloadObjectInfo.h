@class FinderPreloadObjectLutConfig, NSString, FinderPreloadObjectReportSwitch, NSMutableArray;

@interface FinderPreloadObjectInfo : WXPBGeneratedMessage <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) float interestFactor;
@property (retain, nonatomic) FinderPreloadObjectReportSwitch *reportSwitch;
@property (retain, nonatomic) FinderPreloadObjectLutConfig *lutConfig;
@property (nonatomic) BOOL enableFeedPreloadStrategy;
@property (nonatomic) unsigned int minBufferLength;
@property (nonatomic) unsigned int maxBufferLength;
@property (nonatomic) unsigned int minCurrentFeedBufferLength;
@property (nonatomic) int preloadFileTimeMs;
@property (retain, nonatomic) NSMutableArray *loadWithPlaying;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setLoadWithPlaying:(id)a0;
- (id)loadWithPlaying;
- (void)setPreloadFileTimeMs:(int)a0;
- (int)preloadFileTimeMs;
- (void)setMinCurrentFeedBufferLength:(unsigned int)a0;
- (unsigned int)minCurrentFeedBufferLength;
- (void)setMaxBufferLength:(unsigned int)a0;
- (unsigned int)maxBufferLength;
- (void)setMinBufferLength:(unsigned int)a0;
- (unsigned int)minBufferLength;
- (void)setEnableFeedPreloadStrategy:(BOOL)a0;
- (BOOL)enableFeedPreloadStrategy;
- (void)setLutConfig:(id)a0;
- (id)lutConfig;
- (void)setReportSwitch:(id)a0;
- (id)reportSwitch;
- (void)setInterestFactor:(float)a0;
- (float)interestFactor;
- (void)setFeedId:(unsigned long long)a0;
- (unsigned long long)feedId;
- (id)archivedWCTValue;

@end
