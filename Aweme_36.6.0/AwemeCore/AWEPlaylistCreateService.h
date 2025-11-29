@class AWEPlaylistCreateConfig, NSArray, UIWindow, NSString, UIView, AWEMusicPlaylistTitleInputView;

@interface AWEPlaylistCreateService : NSObject <AWEMusicPlaylistTitleInputViewDelegate, YYTextKeyboardObserver>

@property (retain, nonatomic) AWEMusicPlaylistTitleInputView *inputView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL hasShow;
@property (retain, nonatomic) NSArray *musicModels;
@property (retain, nonatomic) AWEPlaylistCreateConfig *createConfig;
@property (weak, nonatomic) UIWindow *appWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)keyboardChangedWithTransition:(struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; double x4; long long x5; unsigned long long x6; })a0;
- (void)createPlaylistWithDspMusicModels:(id)a0 createConfig:(id)a1;
- (void)inputViewTapCancel:(id)a0;
- (void)inputViewTapCompleted:(id)a0 text:(id)a1 privateSetting:(BOOL)a2;
- (void)updateInputViewWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createPlaylistWithTitle:(id)a0 privateSetting:(BOOL)a1;
- (void)dissmiss;
- (id)newPlaylistInfoWithTitlt:(id)a0 playlistId:(id)a1 statusInfo:(id)a2 privacyStatus:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)show;

@end
