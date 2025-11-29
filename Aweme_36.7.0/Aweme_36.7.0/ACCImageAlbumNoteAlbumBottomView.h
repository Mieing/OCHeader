@class NSString, UIVisualEffectView, UILabel, UIButton;

@interface ACCImageAlbumNoteAlbumBottomView : UIView <ACCAlbumPreviewPageBottomViewProtocol, ACCSelectedAssetsBottomViewProtocol>

@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *tipsText;
@property (retain, nonatomic) UIButton *noteButton;
@property (retain, nonatomic) UIButton *selectPhotoButton;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL doAnimation;

- (void)updateSelectPhotoStatus:(BOOL)a0;
- (void)updateNextButtonStatus:(BOOL)a0;
- (void)updatePhotoSelected:(id)a0 greyMode:(BOOL)a1;
- (void)updateRepeatSelected:(id)a0 greyMode:(BOOL)a1;
- (BOOL)shouldShowBottomView:(BOOL)a0 hasSelectedAssets:(BOOL)a1;
- (id)initWithTips:(id)a0;
- (void).cxx_destruct;
- (void)addButton:(id)a0;
- (void)removeButton:(id)a0;
- (void)setUpUI;

@end
