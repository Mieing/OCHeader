@interface AWEUGCTopicTrackerHelper : NSObject

+ (id)processExtra:(id)a0 extraDict:(id)a1 isOuter:(id)a2 withCompletion:(id /* block */)a3;
+ (id)commonParamsWithContext:(id)a0 extraDict:(id)a1 isOuter:(id)a2 usedForPassthrough:(BOOL)a3;
+ (void)processUGCContext:(id)a0 extraDict:(id)a1 isOuter:(id)a2 withCompletion:(id /* block */)a3;

@end
