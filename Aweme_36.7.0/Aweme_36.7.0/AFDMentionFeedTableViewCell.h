@class AWEAwemeDetailCellViewController, UIViewController, NSString;

@interface AFDMentionFeedTableViewCell : AWEAwemeDetailTableViewCell {
    AWEAwemeDetailCellViewController *_viewController;
    UIViewController *_parentVC;
    double _defaultSeekToTime;
    NSString *_previousPage;
}

@property (retain, nonatomic) Class pInteractionControllerFactory;

+ (id)reuseIdentifier;

- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)a0;
- (void)setInteractionControllerFactory:(Class)a0;
- (Class)interactionControllerFactory;
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
