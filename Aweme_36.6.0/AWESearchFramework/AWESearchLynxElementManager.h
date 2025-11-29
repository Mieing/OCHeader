@interface AWESearchLynxElementManager : NSObject

+ (id)shareInstance;

- (id)bdxlynxElementWithRegisterName:(id)a0 elementClass:(Class)a1;
- (id)searchBDXLynxElements;
- (id)searchDynamicLynxElements;
- (void)searchRegisterElement;
- (BOOL)enablesSearchAwemePaasLynxLive;
- (id)searchDynamicLynxElementWithRegisterName:(id)a0 elementClass:(Class)a1;

@end
