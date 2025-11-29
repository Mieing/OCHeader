@class UIButton, NSString;

@interface AWECloudAlbumNewUploadIconView : UIView <AWECloudAlbumUploadIconViewProtocol>

@property (retain, nonatomic) UIButton *suspendedButton;
@property (copy, nonatomic) id /* block */ clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadButtonClick:(id)a0;
- (void)showAnimationWithcompletion:(id /* block */)a0;
- (void)hiddleAnimationWithcompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
