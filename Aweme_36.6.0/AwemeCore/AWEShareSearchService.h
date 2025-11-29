@class NSString;

@interface AWEShareSearchService : AWEShareCommonImpl <AWEShareSearch>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithTrendingSearch:(id)a0 onViewController:(id)a1;

@end
