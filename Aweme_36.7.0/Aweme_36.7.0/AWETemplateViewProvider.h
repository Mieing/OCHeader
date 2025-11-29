@class NSDictionary, NSString, AWETemplateBaseViewModel, AWEPageContext, UIView, AWETemplateBarModel, AWETemplateBarContext;
@protocol AWETemplateViewProtocol;

@interface AWETemplateViewProvider : AWETemplateViewBaseProvider <AWETemplateViewActionProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<AWETemplateViewProtocol> *barView;
@property (retain, nonatomic) AWETemplateBaseViewModel *viewModel;
@property (retain, nonatomic) AWETemplateBarModel *barModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (BOOL)shouldAvoidOtherElementWithData:(id)a0 barModel:(id)a1 context:(id)a2 scene:(unsigned long long)a3 extraInfo:(id)a4;

@end
