@class UIButton, AWEMediaDownloadInfo, DUXLoadingToast;

@interface AWETeenPlayInteractionPrivateMoreButton : AWETeenPlayInteractionBaseElement

@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) DUXLoadingToast *saveLoadingView;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;

- (void)initializeElement;
- (id)destinationURLForURI:(id)a0;
- (void)clickMoreButton;
- (void)saveToAlbum;
- (void)saveToAlbumAction;
- (void)showMorerActionSheetView;
- (void)deletePrivateWorkAction;
- (void)devTrackerSaveEvent:(id)a0;
- (void)showToast:(id)a0 withIconName:(id)a1;
- (id)titleAction:(id)a0;
- (void)deletePrivateWork;
- (void)devTrackerDeleteEvent:(id)a0;
- (void).cxx_destruct;
- (void)longPressAction;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)updateProgress:(double)a0;

@end
