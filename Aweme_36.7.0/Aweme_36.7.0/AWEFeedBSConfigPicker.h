@class NSString, NSMutableDictionary;

@interface AWEFeedBSConfigPicker : HTSService <AWEBSConditionTransProtocol>

@property (retain, nonatomic) NSMutableDictionary *cilentPortraitDic;
@property (retain, nonatomic) NSMutableDictionary *serverPortraitDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateConditionModel:(id)a0;
- (void)getBitrateConfigInfo;
- (id)getBSConfigInfo:(id)a0;
- (void)mockModelInfo:(id)a0;
- (void)updatePortrait;
- (id)getNearestQualityTypeWithModel:(id)a0;
- (long long)getGearVqmResultWithModel:(id)a0;
- (id)getAvgQualityDiffWithModel:(id)a0;
- (id)getBSPortraitDicWith:(id)a0;
- (void)displayDebugInfo:(id)a0 bsAutoBitrateModel:(id)a1 allModels:(id)a2 filterModels:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
