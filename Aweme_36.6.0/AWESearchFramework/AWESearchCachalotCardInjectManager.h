@class NSMutableDictionary;

@interface AWESearchCachalotCardInjectManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *injectViewMap;
@property (copy, nonatomic) id /* block */ clearInjectViewBlock;

- (void)injectViewWithType:(unsigned long long)a0 siteType:(unsigned long long)a1 viewClass:(Class)a2 priority:(long long)a3 resident:(BOOL)a4;
- (double)fetchTotalInjectViewHeightWithViewModel:(id)a0 containerWidth:(double)a1;
- (void)componentEndScroll:(id)a0;
- (void)clearUnreusedInjectViewWithViewModel:(id)a0 componentView:(id)a1 animated:(BOOL)a2;
- (void)updateInjectView:(id)a0 componentView:(id)a1;
- (struct CGSize { double x0; double x1; })componentInjectViewSizeWithViewModel:(id)a0 containerWidth:(double)a1 viewType:(long long)a2;
- (void)updateInjectView:(id)a0 componentView:(id)a1 isVisible:(BOOL)a2;
- (void)bindingComponentAttachmentModelWithViewModel:(id)a0;
- (void)bindingInjectViewDelegateWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
