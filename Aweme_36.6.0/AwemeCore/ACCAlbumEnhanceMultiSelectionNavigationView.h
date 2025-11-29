@class NSString, UILabel, CAKAlbumSelectAlbumButton, UIButton;
@protocol CAKAlbumNavigationViewDelegate;

@interface ACCAlbumEnhanceMultiSelectionNavigationView : UIView <CAKAlbumNavigationViewProtocol>

@property (retain, nonatomic) NSString *shootWay;
@property (retain, nonatomic) UIButton *draftBoxButton;
@property (retain, nonatomic) UIButton *modernTextEditEntranceButton;
@property (nonatomic) long long themeType;
@property (nonatomic) unsigned long long topRightCornerType;
@property (retain, nonatomic) CAKAlbumSelectAlbumButton *selectAlbumButton;
@property (weak, nonatomic) id<CAKAlbumNavigationViewDelegate> delegate;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *enableMultiSelectButton;
@property (retain, nonatomic) UIButton *selectAllAssetsBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSwitch;
- (double)buttonMinWidth;
- (void)hideDraftButton;
- (id)initWithTopRightCornerType:(unsigned long long)a0 themeType:(long long)a1 shootWay:(id)a2;
- (void)openDraftBox;
- (void)openModernTextEditor;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (double)buttonHeight;
- (void)layoutSubviews;

@end
