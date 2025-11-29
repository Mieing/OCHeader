@class NSString, AWEPOIDetailNGPageContext, AWEPOIFeedUgcHeaderModel, AWEPOIDetailNGUGCFloatingTagsComponentView;

@interface AWEPOIDetailNGUGCFloatingTagsComponentViewModel : DitoComponentViewModel <AWEPOIDetailFeedUgcFilterTagsViewDelegate>

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (retain, nonatomic) AWEPOIFeedUgcHeaderModel *headerModel;
@property (nonatomic) BOOL show;
@property (weak, nonatomic) AWEPOIDetailNGUGCFloatingTagsComponentView *componentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didSelectUgcTagWithModel:(id)a0;
- (void)tagsComponentScrollToTop;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })componentInset;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
