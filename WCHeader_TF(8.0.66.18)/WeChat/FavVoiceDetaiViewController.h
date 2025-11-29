@class NSString, MMUIView, FavAudioPlayerController;

@interface FavVoiceDetaiViewController : FavBaseDetailViewController <FavActionSheetDelegate, IContactMgrExt, WCActionSheetDelegate> {
    MMUIView *m_contentView;
    FavAudioPlayerController *m_audioPlayerCtrl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (void)genContent:(id)a0 indexPath:(id)a1;
- (void)onAction:(id)a0;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedItemWithType:(long long)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
