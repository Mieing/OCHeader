@interface AWEKefuUtils : NSObject

+ (id)getCurrentPageControllerName;
+ (id)getCurrentPageController;
+ (id)getPageControllerWithContainer:(id)a0 findPageTypes:(id)a1;
+ (BOOL)isListenWindow:(id)a0;
+ (id /* block */)logBridgeMethod:(id)a0 paramModel:(id)a1 completionHandler:(id /* block */)a2;
+ (id)colorWithHexString:(id)a0;

@end
