@class NSMutableDictionary;

@interface AWEMusicBeatTemplateDetailPreloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *templateDic;

- (id)templateDetailResponseWithID:(id)a0;
- (void)p_trackSlotsInfoCorrectWithTemplateID:(id)a0 awemeModel:(id)a1 mediaModel:(id)a2;
- (void)preloadMusicBeatTemplateWithID:(id)a0 awemeModel:(id)a1;
- (void)storeTemplateResponseCacheWithID:(id)a0 responseModel:(id)a1 awemeModel:(id)a2;
- (void)removeTemplateResponseCacheWithID:(id)a0;
- (void).cxx_destruct;

@end
