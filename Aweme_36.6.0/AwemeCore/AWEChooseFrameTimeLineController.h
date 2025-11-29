@class UILabel, UIButton, AWEChooseFrameTimelineView, DVETrackPanelContext, UIView, UIViewController;

@interface AWEChooseFrameTimeLineController : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *playPointView;
@property (retain, nonatomic) AWEChooseFrameTimelineView *timeLineView;
@property (nonatomic) BOOL isVideoChooseFrame;
@property (copy, nonatomic) id /* block */ didTapConfirmBlock;
@property (copy, nonatomic) id /* block */ didTapCancelBlock;

- (void)didTapConfirmButton;
- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (id)initWithTrackPanelContext:(id)a0 viewController:(id)a1 isVideoChooseFrame:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)didTapCancelButton;

@end
