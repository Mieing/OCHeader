@class NSString, AWEAwemeDetailCellViewController, UIViewController;

@interface AWEHotSpotTTArticleContentTableViewCell : AWEAwemeDetailTableViewCell <AWEHotSpotTTArticleContainerProtocol> {
    AWEAwemeDetailCellViewController *_viewController;
    UIViewController *_parentVC;
    double _defaultSeekToTime;
    NSString *_previousPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifierWithMediaType:(long long)a0;

- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)a0;
- (BOOL)isFirstRender;
- (BOOL)shouldHideMusicInfo;
- (void)_removeChildVC;
- (void)_addChildVC;
- (double)loadArticleInterval;
- (void).cxx_destruct;
- (void)setViewController:(id)a0;
- (id)viewController;
- (id)previousPage;
- (void)setPreviousPage:(id)a0;
- (id)webVC;
- (id)parentVC;
- (void)setParentVC:(id)a0;

@end
