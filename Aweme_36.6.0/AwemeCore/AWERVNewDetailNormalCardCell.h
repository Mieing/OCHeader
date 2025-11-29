@class MASConstraint, AWERVNewDetialInfoContainerView, AWERVNewDetailAuthorInfoView;

@interface AWERVNewDetailNormalCardCell : AWERVNewDetailBaseCell

@property (retain, nonatomic) AWERVNewDetailAuthorInfoView *authorInfoView;
@property (retain, nonatomic) AWERVNewDetialInfoContainerView *metaInfoView;
@property (retain, nonatomic) MASConstraint *videoHeightContraint;

- (long long)abValue;
- (void)makeVideoControllerLayout;
- (void)updateVideoControllerLayout;
- (void)controlViewClicked;
- (void)configWithAwemeModel:(id)a0 context:(id)a1 videoController:(id)a2 logExtraDict:(id)a3;
- (void)handleEventWithActionName:(id)a0;
- (void)updateFollowStatusWithUser:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
