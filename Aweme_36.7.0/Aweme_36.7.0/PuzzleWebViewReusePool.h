@interface PuzzleWebViewReusePool : NSObject

+ (void)enqueueWebView:(id)a0;
+ (id)fetchWebViewWithContext:(id)a0;
+ (BOOL)useNewImpl;

@end
