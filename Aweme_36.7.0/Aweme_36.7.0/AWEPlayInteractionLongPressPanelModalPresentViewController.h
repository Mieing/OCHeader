@class AWEPlayInteractionLongPressModalFakePanelView, LOTAnimationView, AWEAwemeModel, UILabel, NSString, AWEPlayInteractionLongPressModalPanelArcView;

@interface AWEPlayInteractionLongPressPanelModalPresentViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEPlayInteractionLongPressModalPanelArcView *arcView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalFakePanelView *fakePanelView;
@property (retain, nonatomic) LOTAnimationView *arrowView;
@property (nonatomic) BOOL isArcViewExpanded;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelHeight;
+ (double)arcViewHeight;
+ (double)fakePanelHeight;

- (void)updateTitleText:(id)a0;
- (id)initWithModel:(id)a0 style:(unsigned long long)a1;
- (void)foldArcView;
- (void)hidePanel:(BOOL)a0 animated:(BOOL)a1;
- (void)expandArcView;
- (BOOL)enableShowHintLabel;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
