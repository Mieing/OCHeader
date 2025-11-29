@class NSString;
@protocol AFDCloseFriendMomentModelProtocol, AFDCloseFriendsMomentContextProtocol;

@interface AFDCloseFriendsMomentBottomBarViewModel : AWEBaseViewModel <AFDCloseFriendsMomentBottomBarViewModelProtocol>

@property (nonatomic) BOOL shouldShowSendMsgSnackBar;
@property (retain, nonatomic) id<AFDCloseFriendsMomentContextProtocol> context;
@property (retain, nonatomic) id<AFDCloseFriendMomentModelProtocol> currentMomentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAlbumDisabledAlert;
+ (void)saveImage:(id)a0 orVideoURL:(id)a1 showToast:(BOOL)a2 completion:(id /* block */)a3;
+ (void)saveImage:(id)a0 orVideoURL:(id)a1 completion:(id /* block */)a2;
+ (void)hideHerPostFrom:(id)a0 enterMethod:(id)a1 previousPage:(id)a2 awemeModel:(id)a3 completion:(id /* block */)a4;

- (id)enterFromForTracker;
- (void)downloadDraftMediaWithPublishModel:(id)a0 downloadStart:(double)a1;
- (void)p_saveAsPolaroidUsingResultItem:(id)a0 isFlipped:(BOOL)a1 downLoadModel:(id)a2 downLoadStart:(double)a3;
- (void)p_trackDownloadEventWithDownloadStart:(double)a0 extraInfo:(id)a1;
- (void)trackCloseFriendsMomentDownloadWithItemID:(id)a0;
- (void)p_saveGeneratedPolaroidStyleImageUsingImage:(id)a0 downloadStartTime:(double)a1;
- (void)p_downloadMomentForPublishModel:(id)a0;
- (void)p_downloadMomentForAwemeModel:(id)a0;
- (id)momentTypeForTracker;
- (id)picFrameForTracker;
- (id)previousPageForTracker;
- (void)trackNewSendMessageEvent;
- (void)hideHerPostFrom:(id)a0 enterMethod:(id)a1 completion:(id /* block */)a2;
- (void)updateCurrentMoment:(id)a0 context:(id)a1;
- (void)updateCurrentMoment:(id)a0;
- (void)enterMomentList;
- (void)downLoadMoment;
- (void)downLoadMomentWithoutSaveWithCompletion:(id /* block */)a0;
- (void)deleteMoment;
- (void)sendMessageForMoment:(BOOL)a0 isShowTextKeyboard:(BOOL)a1;
- (void)hideHerPostFrom:(id)a0 enterMethod:(id)a1;
- (void)ignoreReverseCloseFriendsWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)moreFunction;
- (id)contextEnterFrom;
- (void).cxx_destruct;
- (id)init;

@end
