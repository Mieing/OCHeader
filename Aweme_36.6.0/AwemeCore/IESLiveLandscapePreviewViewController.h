@class NSString, IESLiveShareContentModel, IESLiveImageView, UILabel, IESLiveLandscapeVideoPreview;

@interface IESLiveLandscapePreviewViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLiveLandscapeVideoPreview *landscapeVideoPreview;
@property (retain, nonatomic) IESLiveImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *userTipLabel;
@property (retain, nonatomic) IESLiveShareContentModel *shareContent;
@property (nonatomic) double landscapePanelWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)panGestureActions:(id)a0;
- (void)defaultAccessLevel;
- (double)pictureRatio;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setupViews;
- (void)removeFromParent;
- (void)moveToParent:(id)a0;

@end
