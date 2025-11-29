@interface GameCenterMsgListNoticeTabViewController : GameCenterMsgListBaseTabViewController

- (void)viewDidLoad;
- (unsigned int)showType;
- (Class)cellClassType;
- (id)cellReuseIdentifier;
- (id)msgListName;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)videoAlbumControllerDidExit;
- (void)videoAlbumControllerDidSkip;
- (void)gameAlbumVideoDidChoose:(id)a0 extraInfo:(id)a1;
- (void)gameVideoEditController:(id)a0 didFinishWithFilePath:(id)a1 withExtra:(id)a2;
- (void)openPublishViewControllerWithVideoInfo:(id)a0 appid:(id)a1;
- (void)gameVideoEditController:(id)a0 didFailedWithError:(id)a1;

@end
