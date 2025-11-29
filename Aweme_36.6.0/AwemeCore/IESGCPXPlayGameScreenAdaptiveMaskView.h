@class UIImageView, UILabel, NSString;

@interface IESGCPXPlayGameScreenAdaptiveMaskView : UIView <IESGCPCGLayerItemViewProtocol>

@property (nonatomic) long long currentMode;
@property (retain, nonatomic) UIImageView *remindView;
@property (retain, nonatomic) UILabel *remindLabel;
@property (nonatomic) BOOL show;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)changeToProtraitMode;
- (void)changeToLandscapeMode;
- (void)changeToFullScreenMode;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isShowing;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setup;

@end
