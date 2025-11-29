@class UIButton, AWEPOIUGCSelectAlbumImpl, NSDictionary, NSString, UIView, CAKAlbumViewController, AWEVideoPublishViewModel;

@interface AWEPOIUGCPictureAlbumTabView : UIView <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) UIView *fakeStatusView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSDictionary *publishModelChangeMap;
@property (retain, nonatomic) AWEPOIUGCSelectAlbumImpl *impm;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ jumpToQuickShootBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked:(id)a0;
- (id)initWithPublishViewModel:(id)a0;
- (void)p_updateAlbumViewWithAssets:(id)a0;
- (void)recoverOriginalPublishModelMap;
- (void)jumpToQuickShoot;
- (void)saveOriginalPublishModelMap:(id)a0;
- (void)p_setupAlbumView;
- (void)updatePublishModelWithMap:(id)a0;
- (void)p_completionWithAssets:(id)a0;
- (id)commonCustomCellConfig;
- (void)albumEndAppearanceTransition;
- (void)dismiss;
- (void).cxx_destruct;
- (void)willDisappear;
- (void)show;
- (void)willShow;

@end
