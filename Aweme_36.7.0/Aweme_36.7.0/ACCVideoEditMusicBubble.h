@class AWEScrollStringLabel, UIImageView, NSString, UIView, UIButton;

@interface ACCVideoEditMusicBubble : UIView <DUXPopoverContent>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEScrollStringLabel *scrollLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIButton *applyButton;
@property (copy, nonatomic) id /* block */ applyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void)didClickApplyButton;
- (void)changeImageViewRotateAnimationStatus:(BOOL)a0;
- (void)configWithImage:(id)a0 title:(id)a1 showApplyButton:(BOOL)a2 imageNeedRotation:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
