@class AWEAwemeDetailCellViewController, UIViewController, NSString;

@interface AWEBasicModeTableViewCell : AWEAwemeDetailTableViewCell {
    AWEAwemeDetailCellViewController *_viewController;
    UIViewController *_parentVC;
    double _defaultSeekToTime;
    NSString *_previousPage;
}

+ (id)reuseIdentifierWithMediaType:(long long)a0;

- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)a0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void).cxx_destruct;
- (void)setViewController:(id)a0;
- (id)viewController;
- (id)previousPage;
- (void)setPreviousPage:(id)a0;
- (id)parentVC;
- (void)setParentVC:(id)a0;

@end
