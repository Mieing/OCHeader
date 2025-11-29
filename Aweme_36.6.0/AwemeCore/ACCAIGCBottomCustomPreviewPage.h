@class NSString, UIVisualEffectView, UILabel, UIButton;

@interface ACCAIGCBottomCustomPreviewPage : UIView <CAKAlbumPreviewPageBottomViewProtocol>

@property (retain, nonatomic) UIButton *customPreviewNextButton;
@property (retain, nonatomic) UIButton *selectPhotoButton;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectPhotoStatus:(BOOL)a0;
- (void)updateNextButtonStatus:(BOOL)a0;
- (void)updatePhotoSelected:(id)a0 greyMode:(BOOL)a1;
- (void)updateRepeatSelected:(id)a0 greyMode:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setUpView;

@end
