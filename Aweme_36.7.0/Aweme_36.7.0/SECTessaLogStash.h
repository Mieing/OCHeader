@class NSString;
@protocol SECURLRelatedLogStash;

@interface SECTessaLogStash : NSObject <SECURLRelatedLogStash>

@property (retain, nonatomic) id<SECURLRelatedLogStash> innerStash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)setupCleanupInterval:(double)a0;
- (void)submitLogItem:(id)a0;
- (id)logsForURL:(id)a0 between:(double)a1 andTime:(double)a2;
- (void).cxx_destruct;
- (id)init;

@end
