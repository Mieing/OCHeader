@class UIColor, BDPWebViewPage, NSString;

@interface BDPAppPageScrollObserver : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) BDPWebViewPage *page;
@property (retain, nonatomic) UIColor *backgroundColorTop;
@property (retain, nonatomic) UIColor *backgroundColorBottom;
@property (retain, nonatomic) UIColor *pageBackgroundColor;
@property (nonatomic) long long fpsMonitorCount;
@property (nonatomic) long long longTaskMonitorCount;
@property (nonatomic) BOOL isLongTaskMonitoring;
@property (nonatomic) BOOL isMonitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)scrollViewDidEndScroll;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
