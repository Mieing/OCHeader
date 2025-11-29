@class UIButton, UIView;
@protocol IESLiveEmojiCreateAlertViewDelegate;

@interface IESLiveEmojiCreateAlertView : UIView

@property (retain, nonatomic) UIButton *openCameraButtton;
@property (retain, nonatomic) UIButton *openPhotoAlbumButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *dividingLineView;
@property (nonatomic) BOOL isFromRoom;
@property (weak, nonatomic) id<IESLiveEmojiCreateAlertViewDelegate> delegate;

- (void)setUI;
- (void)tapCancel;
- (void)tapOpenPhotoAlbumButton;
- (void)tapOpenCameraButtton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isfromRoom:(BOOL)a1;
- (void).cxx_destruct;

@end
