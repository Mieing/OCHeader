@class NSString, UIImageView, UIVisualEffectView, UILabel, UIView, UIButton;

@interface CAKAlbumPreviewPageBottomView : UIView <CAKAlbumPreviewPageBottomViewProtocol>

@property (nonatomic) unsigned long long selectedIconStyle;
@property (nonatomic) BOOL enableRepeatSelect;
@property (retain, nonatomic) UIImageView *unCheckImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *numberBackgroundImageView;
@property (retain, nonatomic) UIView *selectPhotoView;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *selectPhotoButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectPhotoStatus:(BOOL)a0;
- (void)updateNextButtonStatus:(BOOL)a0;
- (void)updatePhotoSelected:(id)a0 greyMode:(BOOL)a1;
- (void)updateRepeatSelected:(id)a0 greyMode:(BOOL)a1;
- (void)doRepeatSelectAnimation;
- (void)addSelectPhotoGesture:(id)a0;
- (void)p_setupSubviews;
- (id)initWithSelectedIconStyle:(unsigned long long)a0 enableRepeatSelect:(BOOL)a1;
- (void).cxx_destruct;
- (void)addButton:(id)a0;

@end
