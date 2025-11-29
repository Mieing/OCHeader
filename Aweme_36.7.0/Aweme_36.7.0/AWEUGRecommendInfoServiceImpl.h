@class NSString, MMKV;

@interface AWEUGRecommendInfoServiceImpl : HTSService <AWEUGRecommendInfoService>

@property (retain, nonatomic) MMKV *ugRecommendInfoStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordRecommendInfo:(id)a0 params:(id)a1 forType:(unsigned long long)a2;
- (id)retrieveRecommendInfoForType:(unsigned long long)a0;
- (id)retrieveRecommendParamsForType:(unsigned long long)a0;
- (BOOL)isValidUgInfo:(id)a0;
- (id)infoKeyForType:(unsigned long long)a0;
- (id)originSchemaKeyForType:(unsigned long long)a0;
- (void)clearRecommendInfoForType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
