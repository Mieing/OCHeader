@class NSString, UILabel, UIView, UIButton;
@protocol AWEPluginImageCAKAlbumBottomViewDelegate;

@interface AWEPluginImageCAKAlbumBottomView : UIView <CAKAlbumBottomViewProtocol>

@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIButton *selectOriginalImageButton;
@property (weak, nonatomic) id<AWEPluginImageCAKAlbumBottomViewDelegate> delegate;
@property (nonatomic) BOOL isOriginalImageButtonSelected;
@property (nonatomic) BOOL isOriginalButtonEnabled;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsOriginalImageButtonSelected:(BOOL)a0;
- (void)onSwitchOriginImageSelect;
- (BOOL)isOriginalImageButtonSelected;
- (id)initWithDelegate:(id)a0 isOriginalImageButtonSelected:(BOOL)a1 isOriginalButtonEnabled:(BOOL)a2 isOriginalButtonHidden:(BOOL)a3;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
