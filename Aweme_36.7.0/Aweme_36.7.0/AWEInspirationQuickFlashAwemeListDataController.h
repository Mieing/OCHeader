@class AWEMusicDetailQuickFlashInspirationModel;

@interface AWEInspirationQuickFlashAwemeListDataController : AWEInspirationAwemeListDataController

@property (weak, nonatomic) AWEMusicDetailQuickFlashInspirationModel *quickFlashModel;

- (id)networkRequestCommonParams;
- (unsigned long long)inspirationType;
- (void)weakBindInspirationModel:(id)a0;
- (void).cxx_destruct;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
