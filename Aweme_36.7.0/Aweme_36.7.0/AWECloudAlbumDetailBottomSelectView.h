@class ACCButton;
@protocol AWECloudAlbumDetailBottomSelectViewDelegate;

@interface AWECloudAlbumDetailBottomSelectView : UIView

@property (retain, nonatomic) ACCButton *publishButton;
@property (retain, nonatomic) ACCButton *localSaveButton;
@property (retain, nonatomic) ACCButton *deleteButton;
@property (weak, nonatomic) id<AWECloudAlbumDetailBottomSelectViewDelegate> delegate;

- (void)updateWithSelectedCount:(long long)a0 saveEnable:(BOOL)a1;
- (void)onPublishButtonAction:(id)a0;
- (void)onLocalSaveButtonAction:(id)a0;
- (void)onDeleteButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
