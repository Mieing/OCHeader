@interface AWERecommendChapterBarViewModel : AWETemplateBaseViewModel

@property (nonatomic) BOOL hasTriedToShowAlert;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;

- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (void)didInitialized;
- (void)trackRecommendChapterBarShow;
- (void)trackRecommendChapterBarClick;
- (id)paramsForRecommendChapterTracker;
- (void)hideCurrentElement:(id)a0;
- (void)dealloc;

@end
