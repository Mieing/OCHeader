@class NSMapTable, UIView, NSLock, NSMutableArray;

@interface CSJWebViewPoolManager : NSObject

@property (retain, nonatomic) NSMapTable *usedMapTable;
@property (retain, nonatomic) NSMutableArray *webViewArray;
@property (retain, nonatomic) NSLock *webViewArrayLock;
@property (retain, nonatomic) UIView *zeroView;
@property (readonly, nonatomic) long long webviewCount;
@property (readonly, nonatomic) long long availableCacheCount;
@property (readonly, nonatomic) long long usedCount;

+ (id)sharedInstance;

- (void)promote_webViewPriorityWithView:(id)a0;
- (id)usableWebViewOwnerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume_webViewPriorityWithView:(id)a0;
- (void)removeCacheWebViewClient:(id)a0;
- (void)pbu_checkInMainWindow;
- (id)pbu_keyFromWebViewClient:(id)a0;
- (id)pbu_createWebViewClient;
- (long long)maxCount;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;

@end
