@class NSString, NSArray, NSDictionary, YataProtocolModel, YataStore;

@interface YataAdjustState : NSObject <YataState>

@property (copy, nonatomic) NSString *adjustNodeKey;
@property (copy, nonatomic) NSArray *dataMergeParams;
@property (retain, nonatomic) NSDictionary *payLoadData;
@property (retain, nonatomic) NSArray *updateList;
@property (retain, nonatomic) NSDictionary *triggerParams;
@property (retain, nonatomic) NSDictionary *adjustFields;
@property (weak, nonatomic) YataProtocolModel *cachedProtocol;
@property (copy, nonatomic) NSString *triggerName;
@property (copy, nonatomic) NSString *nodeName;
@property (nonatomic) BOOL hasFailedConfig;
@property (weak, nonatomic) YataStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithAdjustEventData:(id)a0;
- (BOOL)adjustStoreFields;
- (void)reportAdjustError:(unsigned long long)a0 params:(id)a1;
- (id)matchVOMapInDataItemMap:(id)a0 withValidPath:(id)a1 matchVOValue:(id)a2;
- (BOOL)adjustDataFields:(id)a0 payload:(id)a1 errorNumber:(id *)a2;
- (BOOL)adjustDataFieldsByDataMerge:(id)a0 withDataMerge:(id)a1 errorNumber:(id *)a2;
- (BOOL)adjustDataFields:(id)a0 sourceFields:(id)a1 sourcePath:(id)a2 targetPath:(id)a3 errorInfoNumber:(id *)a4;
- (BOOL)validatePath:(id)a0 inFields:(id)a1 isTarget:(BOOL)a2;
- (id)getSourceValueWithSourcePath:(id)a0 fields:(id)a1;
- (id)getTargetValueWithTargetPath:(id)a0 targetFields:(id)a1 pathFullyMatched:(BOOL *)a2 matchedPath:(id *)a3;
- (void).cxx_destruct;

@end
