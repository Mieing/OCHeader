@interface AWEDCFeedBottomTabTools : NSObject

+ (id)loadImageWithURL:(id)a0 imageMap:(id)a1 defaultImage:(id /* block */)a2;
+ (void)tryAppendURL:(id)a0 toDownloadURLSet:(id)a1;
+ (BOOL)isCustomDefaultURL:(id)a0;
+ (BOOL)isDownloadURL:(id)a0;
+ (BOOL)isDefaultURL:(id)a0;

@end
