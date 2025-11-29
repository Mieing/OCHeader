@class NSString, NSMutableDictionary;

@interface AmoebaPageDataEntity : NSObject

@property (nonatomic) unsigned long long pageId;
@property (nonatomic) unsigned long long bizGroupId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableDictionary *pageParams;
@property (retain, nonatomic) NSMutableDictionary *pageEventParams;
@property (retain, nonatomic) NSMutableDictionary *refPageParams;
@property (retain, nonatomic) NSMutableDictionary *sourcePageParams;
@property (retain, nonatomic) NSMutableDictionary *innerProperty;
@property (retain, nonatomic) NSMutableDictionary *reportPolicy;
@property (nonatomic) long long pageStep;
@property (nonatomic) unsigned long long pageInTime;
@property (nonatomic) unsigned long long sessionInTime;
@property (retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks;
@property (retain, nonatomic) NSMutableDictionary *reportBreakerBlocks;
@property (retain, nonatomic) NSMutableDictionary *reportIntervals;
@property (retain, nonatomic) NSMutableDictionary *lastReportTimes;
@property (weak, nonatomic) id relatedModel;
@property (retain, nonatomic) NSString *sourceViewId;
@property (nonatomic) BOOL isFullSubPage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableDictionary *bizOutDynamicParamsCache;
@property (retain, nonatomic) NSMutableDictionary *sessionOutDynamicParamsCache;
@property (retain, nonatomic) NSMutableDictionary *pageOutDynamicParamsCache;

- (id)init;
- (void)reset;
- (id)toString;
- (void).cxx_destruct;

@end
