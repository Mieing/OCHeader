@class NSString, UIImageView, UILabel, ACCButton;
@protocol AWECloudAlbumPopupVCProtocol;

@interface AWECloudAlbumOfflineView : UIView <AWECloudAlbumPopupContentViewProtocol>

@property (retain, nonatomic) ACCButton *cancleButton;
@property (retain, nonatomic) UIImageView *flagImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) ACCButton *downloadButton;
@property (retain, nonatomic) ACCButton *closeButton;
@property (copy, nonatomic) id /* block */ cancleButtonAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ downloadAction;
@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (nonatomic) BOOL needPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancleAction;
- (void)cancleClickAction:(id)a0;
- (void)downloadClickAction:(id)a0;
- (void)closeClickAction:(id)a0;
- (id)initWithCancleAction:(id /* block */)a0 closeAction:(id /* block */)a1 downloadAction:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (double)contentViewHeight;

@end
