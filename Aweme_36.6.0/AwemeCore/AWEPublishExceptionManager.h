@interface AWEPublishExceptionManager : NSObject

+ (id)checkerMap;
+ (void)setContext:(id)a0 type:(id)a1;
+ (void)checkWithType:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (void)checkWithType:(id)a0 publishModel:(id)a1 showAlert:(BOOL)a2 trackEvent:(BOOL)a3 uploadThreadInfos:(BOOL)a4 uploadAlog:(BOOL)a5 completion:(id /* block */)a6;
+ (id)getContextWithType:(id)a0;
+ (void)removeContext:(id)a0;

@end
