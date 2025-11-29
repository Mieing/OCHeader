@class NSArray, AWESearchVideoDeconstructEntity;

@interface AWETemplateVideoDeconstructViewModel : AWETemplateBaseViewModel

@property (retain, nonatomic) NSArray *gsEntities;
@property (retain, nonatomic) AWESearchVideoDeconstructEntity *firstEntity;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;

- (id)currentAweme;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (void)viewTransfer;
- (id)paramsForTemplateViewShow;
- (id)paramsForTemplateViewClick;
- (void).cxx_destruct;
- (id)interactionContext;

@end
