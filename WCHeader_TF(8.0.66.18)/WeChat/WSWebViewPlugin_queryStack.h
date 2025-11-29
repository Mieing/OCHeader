@interface WSWebViewPlugin_queryStack : WSWebViewPluginBase

- (void)pushQuery:(id)a0;
- (unsigned int)__getCorrectLevel:(id)a0;
- (BOOL)enableBackToLastQuery;
- (void)backToLastQuery;
- (void)clear;
- (id)searchPage;

@end
