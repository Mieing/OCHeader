@class NSString, BDCommonABTestExperimentItemModel;

@interface BDCommonABTestBaseExperiment : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) unsigned long long valueType;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL isBind2User;
@property (retain) NSString *source;
@property (retain) BDCommonABTestExperimentItemModel *stickyResult;
@property (retain) BDCommonABTestExperimentItemModel *fetchedResult;
@property (copy) id /* block */ settingsValueBlock;

+ (Class)classForValueType:(unsigned long long)a0;

- (id)initWithKey:(id)a0 owner:(id)a1 description:(id)a2 defaultValue:(id)a3 valueType:(unsigned long long)a4 isSticky:(BOOL)a5;
- (id)initWithKey:(id)a0 owner:(id)a1 description:(id)a2 defaultValue:(id)a3 valueType:(unsigned long long)a4 isSticky:(BOOL)a5 settingsValueBlock:(id /* block */)a6;
- (BOOL)hasExposed;
- (id)initWithKey:(id)a0 owner:(id)a1 description:(id)a2 defaultValue:(id)a3 valueType:(unsigned long long)a4 isSticky:(BOOL)a5 isBind2User:(BOOL)a6 settingsValueBlock:(id /* block */)a7;
- (id)getResultWithExposure:(BOOL)a0;
- (void)handleFetchedResultUpdated:(id)a0;
- (id)freshValue;
- (id)getValueWithExposure:(BOOL)a0;
- (void)resetStickyResult;
- (void).cxx_destruct;
- (void)dealloc;

@end
