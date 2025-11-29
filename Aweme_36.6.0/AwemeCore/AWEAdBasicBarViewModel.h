@class AWETemplateBarModel, AWETemplateBarContext;

@interface AWEAdBasicBarViewModel : AWETemplateBaseViewModel

@property (weak, nonatomic) AWETemplateBarContext *context;
@property (weak, nonatomic) AWETemplateBarModel *adBarModel;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;

- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackForTemplateViewShow;
- (id)initWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
- (void).cxx_destruct;

@end
