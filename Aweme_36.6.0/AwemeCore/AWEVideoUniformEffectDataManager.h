@class NSArray, NSMutableDictionary, NSDictionary;

@interface AWEVideoUniformEffectDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *effectDataMap;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSArray *effectListUseAIRecommend;
@property (copy, nonatomic) NSDictionary *loadEffectRequestExtraParameters;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (nonatomic) double timeEditorStarted;

- (id)getEffectListWithCategory:(id)a0;
- (void)fetchEffectDataWithCategorys:(id)a0 completion:(id /* block */)a1;
- (void)fetchEffectDataWithPropIds:(id)a0 extraParameters:(id)a1 completion:(id /* block */)a2;
- (void)fetchEffectDataWithPropIds:(id)a0 extraParameters:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)fetchEffectDataWithCategorys:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)fetchMyEffectWithCompletion:(id /* block */)a0;
- (void)fetchUsedEffectWithCompletion:(id /* block */)a0;
- (void)fetchEffectWithCategory:(id)a0 pageCount:(long long)a1 cursor:(long long)a2 completion:(id /* block */)a3;
- (void)setFetchEffectData:(id)a0 forCategory:(id)a1;
- (void)trackToolPerformanceApiWithExtraParams:(id)a0;
- (void).cxx_destruct;

@end
