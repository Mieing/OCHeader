@class IESECLiveReplayNewAvatarComponentView, NSString, IESECLiveReplayDataStore, IESECButton, UIButton;

@interface IESECLiveReplayNavigationBarView : UIView <IESECLiveReplayComponentViewProtocol>

@property (retain, nonatomic) IESECLiveReplayNewAvatarComponentView *avatarView;
@property (retain, nonatomic) UIButton *replayCntView;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (retain, nonatomic) IESECButton *closeButton;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataStoreChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataStore:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)handleClose;

@end
