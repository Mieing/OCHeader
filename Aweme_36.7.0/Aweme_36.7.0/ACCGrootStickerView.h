@class ACCGrootStickerViewViewModel, NSString, UITextField, UIImageView, UILabel, UIView, ACCGrootStickerModel;
@protocol ACCStickerContainerProtocol;

@interface ACCGrootStickerView : UIView <ACCStickerEditContentProtocol>

@property (nonatomic) BOOL enableEdit;
@property (nonatomic) struct CGPoint { double x; double y; } editCenter;
@property (nonatomic) double currentScale;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) UITextField *inputTextView;
@property (retain, nonatomic) UILabel *iconFontLabel;
@property (retain, nonatomic) UIImageView *grootImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *hashtagContentView;
@property (retain, nonatomic) UIImageView *hashtagImageView;
@property (retain, nonatomic) UILabel *inputTextColorLabel;
@property (retain, nonatomic) UITextField *hashtagInputTextView;
@property (retain, nonatomic) ACCGrootStickerViewViewModel *viewModel;
@property (nonatomic) BOOL snapIsDummy;
@property (readonly, nonatomic) ACCGrootStickerModel *stickerModel;
@property (readonly, copy, nonatomic) NSString *grootStickerUniqueId;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) id /* block */ triggerDragDeleteCallback;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentDidUpdateToScale:(double)a0;
- (id)copyForContext:(id)a0;
- (BOOL)isFromRecord;
- (id)initWithStickerModel:(id)a0 grootStickerUniqueId:(id)a1;
- (void)configGrootDetailsStickerModel:(id)a0 snapIsDummy:(BOOL)a1;
- (void)transportToEditWithSuperView:(id)a0 animation:(id /* block */)a1 selectedViewAnimationBlock:(id /* block */)a2 animationDuration:(double)a3;
- (void)restoreToSuperView:(id)a0 animationDuration:(double)a1 animationBlock:(id /* block */)a2 selectedViewAnimationBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)updateFrameWithGroot:(BOOL)a0;
- (void)updateEdtingFrames;
- (id)gradientColorImageFromColors:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 gradientRect:(long long)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
