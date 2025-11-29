@class AWEAwemeModel, AWELongVideoPlusFeedCellViewController, UIViewController;

@interface AWEFeedLongVideoPlusViewCell : AWEFeedViewCell {
    UIViewController *_parentVC;
    AWEAwemeModel *_registerElementModel;
}

@property (retain, nonatomic) AWELongVideoPlusFeedCellViewController *viewController;

- (void)didDisplay;
- (id)registerElementModel;
- (void)setRegisterElementModel:(id)a0;
- (void)configWithModel:(id)a0;
- (void)removeCellChildVCForMemoryOpt;
- (BOOL)shouldPreventVideoPause;
- (void)addChildVC;
- (void)removeChildVC;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)stop;
- (void)reset;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;
- (id)parentVC;
- (void)setParentVC:(id)a0;

@end
