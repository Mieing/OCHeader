@class UIView, NSString, UITapGestureRecognizer, AWEListDataController, UIButton, UIPanGestureRecognizer, MASConstraint, UILabel, AWERelatedRecomendPanelListView;
@protocol AWERelatedRecomendPanelViewDelegate;

@interface AWERelatedRecomendPanelViewController : UIViewController <UIGestureRecognizerDelegate, AWERelatedRecomendPanelListViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *bottomCollectView;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (retain, nonatomic) AWERelatedRecomendPanelListView *listView;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWERelatedRecomendPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfPanned:(id)a0;
- (void)selfTapped:(id)a0;
- (void)refreshWithTitle:(id)a0 dataController:(id)a1 currentAwemeModel:(id)a2;
- (void)panelListDidSelectAtIndex:(long long)a0 aweme:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)closeButtonTapped;

@end
