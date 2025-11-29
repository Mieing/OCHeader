@class NSMutableDictionary;

@interface AWEShowPlayletFastEnterModelHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *awemeModelDic;

+ (id)sharedHelper;

- (void)cacheAwemeModels:(id)a0 pageString:(id)a1 enterFrom:(id)a2;
- (void)cacheAwemeModelsWithIdList:(id)a0 pageString:(id)a1 enterFrom:(id)a2;
- (void)cacheAwemeModelsWithDicList:(id)a0 pageString:(id)a1 enterFrom:(id)a2;
- (void)deleteAwemeModelsWithPageString:(id)a0;
- (void).cxx_destruct;

@end
