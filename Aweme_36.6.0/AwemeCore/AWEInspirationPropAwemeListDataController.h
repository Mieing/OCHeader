@class AWEMusicDetailPropInspirationModel;

@interface AWEInspirationPropAwemeListDataController : AWEInspirationAwemeListDataController

@property (weak, nonatomic) AWEMusicDetailPropInspirationModel *propModel;

- (id)networkRequestCommonParams;
- (unsigned long long)inspirationType;
- (void)weakBindInspirationModel:(id)a0;
- (void).cxx_destruct;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
