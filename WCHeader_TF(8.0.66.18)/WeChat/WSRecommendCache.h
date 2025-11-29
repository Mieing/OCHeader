@class NSString, NSArray, NSMutableSet;

@interface WSRecommendCache : NSObject <PBCoding>

@property (retain, nonatomic) NSString *nsJson;
@property (nonatomic) unsigned int cacheTime;
@property (nonatomic) unsigned int directShowInterval;
@property (nonatomic) unsigned int refreshInterval;
@property (nonatomic) unsigned int category;
@property (retain, nonatomic) NSArray *docIdList;
@property (retain, nonatomic) NSMutableSet *filterDocIdSet;
@property (nonatomic) unsigned int redDotTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsJson;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_directShowInterval;
+ (void)PBArrayAdd_refreshInterval;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_docIdList;
+ (void)PBArrayAdd_filterDocIdSet;
+ (void)PBArrayAdd_redDotTimeStamp;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithWebRecommendResponse:(id)a0;
- (BOOL)isValid;
- (void)reset;
- (BOOL)shouldDirectShow;
- (BOOL)isCacheValid;
- (void).cxx_destruct;

@end
