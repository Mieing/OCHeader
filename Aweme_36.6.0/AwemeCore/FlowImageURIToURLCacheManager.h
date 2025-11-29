@interface FlowImageURIToURLCacheManager : NSObject

+ (void)prepareResource;
+ (void)slimURI2URLIfNeeded;
+ (id)lastestURLWithURI:(id)a0;
+ (void)setLastestURL:(id)a0 withURI:(id)a1;
+ (void)initialize;
+ (void)archive;

@end
