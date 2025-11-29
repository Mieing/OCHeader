@class MinimizeTaskFloatingInfo, NSString, UIImageView, UIView, MMUIButton, UIButton;
@protocol MinimizeTaskFloatingContainerViewDelegate;

@interface MinimizeTaskFloatingContainerView : UIView <IMiniMizeUserdRecordUpdateExt>

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIButton *contentButton;
@property (retain, nonatomic) UIView *bizIconBlurView;
@property (retain, nonatomic) UIImageView *bizIconView;
@property (retain, nonatomic) UIImageView *topMaskView;
@property (retain, nonatomic) UIImageView *bottomMaskView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *inactiveMaskView;
@property (retain, nonatomic) UIView *expandMaskView;
@property (retain, nonatomic) MinimizeTaskFloatingInfo *containerInfo;
@property (weak, nonatomic) id<MinimizeTaskFloatingContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initUI;
- (void)updateTransform;
- (void)updateContent;
- (void)setDragToExpandProgress:(double)a0 dragOffset:(double)a1;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)layoutSubviews;
- (void)onClickAtCloseButton:(id)a0;
- (void)onClickAtTaskContent:(id)a0;
- (void)onTaskSnapShotUpdate:(id)a0 snapshot:(id)a1;
- (void).cxx_destruct;

@end
