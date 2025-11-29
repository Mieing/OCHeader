@class UIColor, NSString, UIVisualEffectView, UILabel, UIButton;

@interface ACCAlbumPreviewPageBottomViewImpl : UIView <ACCAlbumPreviewPageBottomViewProtocol>

@property (retain, nonatomic) UIButton *selectPhotoButton;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIColor *selectPhotoButtonNormalBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectPhotoStatus:(BOOL)a0;
- (void)updateNextButtonStatus:(BOOL)a0;
- (void)updatePhotoSelected:(id)a0 greyMode:(BOOL)a1;
- (void)updateRepeatSelected:(id)a0 greyMode:(BOOL)a1;
- (void)addSelectPhotoGesture:(id)a0;
- (void)hideBottomView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
