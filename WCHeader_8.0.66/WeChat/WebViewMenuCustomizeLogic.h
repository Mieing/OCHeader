@class NSMutableDictionary;

@interface WebViewMenuCustomizeLogic : NSObject {
    NSMutableDictionary *dicJSMenuDataForUrl;
}

- (id)init;
- (id)getArrDynamicConfigWebViewMenuData;
- (void)setJSCustomMenuData:(id)a0 forMainUrl:(id)a1;
- (id)getJSCutomWebViewMenuDataForMainUrl:(id)a0;
- (void).cxx_destruct;

@end
