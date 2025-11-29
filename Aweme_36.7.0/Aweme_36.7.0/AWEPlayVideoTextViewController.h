@class NSString, AWEPageContext, AWEAwemeModel, UIScrollView, UIViewController;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayAiToTextPanelViewControllerDelegate;

@interface AWEPlayVideoTextViewController : UIViewController <AWEPlayAiToTextPanelVCProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) id<AWEPlayAiToTextPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *referString;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ sectionDidSelectBlock;
@property (copy, nonatomic) NSString *exitMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)dismissLoadingView;
- (id)formattedJumpTimeForTime:(id)a0;
- (void)updateSectionStatusWithTime:(double)a0;
- (void)dismissPanle;
- (double)caculateHeightForContent:(id)a0 width:(double)a1;
- (void).cxx_destruct;
- (void)hideMenu;

@end
