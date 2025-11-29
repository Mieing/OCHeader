@class UILabel, UIButton, UIVisualEffectView;

@interface AWECommentMediaPickerSwiftImpl.CommentAlbumBottomView : UIView <ACCSelectedAssetsBottomViewProtocol, ACCAlbumPreviewPageBottomViewProtocol> {
    void /* unknown type, empty encoding */ buttonList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextButton;
}

@property (nonatomic) BOOL doAnimation;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIButton *selectPhotoButton;
@property (nonatomic, retain) UILabel *selectHintLabel;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) UIButton *nextButton;

- (void)updateSelectPhotoStatus:(BOOL)a0;
- (void)updateNextButtonStatus:(BOOL)a0;
- (void)updatePhotoSelected:(id)a0 greyMode:(BOOL)a1;
- (void)updateRepeatSelected:(id)a0 greyMode:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
