@class AWEMusicDetailTemplateInspirationModel;

@interface AWEInspirationTemplateAwemeListDataController : AWEInspirationAwemeListDataController

@property (weak, nonatomic) AWEMusicDetailTemplateInspirationModel *templateModel;

- (id)networkRequestCommonParams;
- (unsigned long long)inspirationType;
- (void)weakBindInspirationModel:(id)a0;
- (long long)lvTemplateMatchType;
- (void).cxx_destruct;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
