@class MMFinderLiveFrontEndPreviewView;

@interface WCFinderRouterJSOpenViewExtraParams : NSObject

@property (retain, nonatomic) MMFinderLiveFrontEndPreviewView *previewView;
@property (nonatomic) BOOL forceIgnoreFinderAuthBlock;
@property (copy, nonatomic) id /* block */ popFeedViewCallBack;
@property (copy, nonatomic) id /* block */ feedStopPlayCallBack;

- (void).cxx_destruct;

@end
