@class UIView, AWETeenAlbumDataController, AWETeenAlbumPanelCollectionView, NSString, AWETeenAlbumPanelCollectView, CAGradientLayer, DUXTeenPopover, AWETeenLandscapeAlbumPanelSlidingTabView, UILabel;
@protocol AWETeenPanelPresentPortocol;

@interface AWETeenLandscapeAlbumPanelContainer : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWETeenAlbumPanelCollectionView *collectionView;
@property (retain, nonatomic) AWETeenLandscapeAlbumPanelSlidingTabView *collectionSlidingTabView;
@property (nonatomic) BOOL didShowPanel;
@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroudView;
@property (retain, nonatomic) UIView *listContainer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (nonatomic) double panelWidth;
@property (retain, nonatomic) AWETeenAlbumPanelCollectView *albumCollectView;
@property (retain, nonatomic) DUXTeenPopover *popover;
@property (weak, nonatomic) id<AWETeenPanelPresentPortocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (id)initWithDataController:(id)a0;
- (void)presentWithPlayingIndex:(long long)a0;
- (void)showAlbumCollectSuccessPopover;
- (void)p_addHeader;
- (void)p_addGestureRecognizer;
- (void)p_onSingleTap;
- (void)p_addBackgroudView;
- (void)p_addSlidingTabView;
- (void)p_addListContainer;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
