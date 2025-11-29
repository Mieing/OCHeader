@class AWERVNewDetialInfoContainerView;

@interface AWERVNewDetailHeadCardCell : AWERVNewDetailBaseCell

@property (retain, nonatomic) AWERVNewDetialInfoContainerView *metaInfoView;

- (void)hideTimeLabelIfNeed:(BOOL)a0;
- (void)makeVideoControllerLayout;
- (void)updateVideoControllerLayout;
- (void)controlViewClicked;
- (void)configWithAwemeModel:(id)a0 context:(id)a1 videoController:(id)a2 logExtraDict:(id)a3;
- (void)handleEventWithActionName:(id)a0;
- (void)updateMetaInfoViewWithModel:(id)a0;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
