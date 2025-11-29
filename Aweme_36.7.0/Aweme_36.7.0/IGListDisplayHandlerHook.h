@interface IGListDisplayHandlerHook : NSObject

+ (void)hookWillDisplaySupplementaryViewWithClass:(Class)a0;
+ (void)hookDidEndDisplayingSupplementaryViewWithClass:(Class)a0;
+ (BOOL)shouldDispatchDisplayEventWithSectionController:(id)a0 supplementaryView:(id)a1;
+ (void)hook;

@end
