@interface AWEVideoCoverEvaluateViewModel : AWETemplateBaseViewModel

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;

- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackForTemplateViewShow;
- (void)trackBarShow;
- (void)trackBarClick;
- (id)paramsForTracker;

@end
