@class NSString;

@interface AWEAwemeDetailAlbumCommonController : AWEAwemeNewDetailBaseController <AWEFeedMuteGuideProtocol>

@property (nonatomic) BOOL canShowMuteGuideButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onAwemeDeletedWithModel:(id)a0 isDislike:(BOOL)a1 index:(unsigned long long)a2;
- (void)trackEndMultiPhotoConsume:(id)a0 cell:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
