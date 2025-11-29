@interface AWEGeneralPostRouter : NSObject

+ (void)routeToEditWithComposer:(id)a0 schemaModel:(id)a1 disableLoading:(BOOL)a2 customTransition:(id /* block */)a3;
+ (void)routeToEditWithTransitionInfo:(id)a0;
+ (void)trackLoadingStatus:(id)a0 transitionInfo:(id)a1;
+ (void)routeToLoadingPageWithTransitionInfo:(id)a0;
+ (void)routeWithTransitionInfo:(id)a0;

@end
