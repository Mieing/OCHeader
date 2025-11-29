@class UIView, AWETemplateBarModel, NSString, AWEPageContext, AWETemplatePOIView, NSDictionary, AWETemplatePOIViewModel, AWETemplateBarContext;

@interface AWETemplatePOIViewProvider : AWETemplateViewBaseProvider <AWETemplateViewActionProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWETemplatePOIView *barView;
@property (retain, nonatomic) AWETemplatePOIViewModel *viewModel;
@property (retain, nonatomic) AWETemplateBarModel *barModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)viewClass;

- (void)configViewModel;
- (void)configBarView;
- (void).cxx_destruct;

@end
