@class NSString, AWEAwemeModel, UIView, AWEFeedPlayableDetailCellViewController, UIViewController;
@protocol UIScrollViewDelegate;

@interface AWEFeedPlayableDetailTableViewCell : AWEAwemeDetailTableViewCell <AWEFeedTableViewCellProtocol> {
    double _defaultSeekToTime;
    NSString *_previousPage;
}

@property (retain, nonatomic) AWEFeedPlayableDetailCellViewController *viewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)a0;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)a0;

@end
