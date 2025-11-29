@class NSString, SECLogTools, SECRulerFeatures;

@interface SECTessaReporter : NSObject <SECTessaSubscriber>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SECLogTools *logger;
@property (retain, nonatomic) SECRulerFeatures *ruler;
@property (nonatomic) BOOL hasNoRuler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)legacyCacheDirPath:(id)a0;

- (void)willConsumeDirtyTessas:(id)a0;
- (void)didConsumeDirtyTessas:(id)a0;
- (void)cleanLegacyCacheIfNeeded;
- (id)mergeCommits:(id)a0;
- (BOOL)reportTessaIfNeeded:(id)a0;
- (id)runRulerFilterFor:(id)a0;
- (void)_reportTessa:(id)a0 withSample:(unsigned long long)a1;
- (id)initWithName:(id)a0 andConfig:(id)a1;
- (void).cxx_destruct;

@end
