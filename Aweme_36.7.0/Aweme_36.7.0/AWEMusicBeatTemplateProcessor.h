@class AWEMusicBeatTemplateDetailPreloader;

@interface AWEMusicBeatTemplateProcessor : NSObject

@property (retain, nonatomic) AWEMusicBeatTemplateDetailPreloader *detailPreloader;

+ (id)sharedInstance;

- (void)p_showError;
- (void)startMusicBeatTemplateProcessWithTemplateID:(id)a0 awemeModel:(id)a1 extraInfo:(id)a2;
- (void)preloadMusicBeatTemplateWithID:(id)a0 awemeModel:(id)a1;
- (id)p_genExtraInfoWithAwemeModel:(id)a0 anchorExtraStr:(id)a1;
- (void).cxx_destruct;

@end
