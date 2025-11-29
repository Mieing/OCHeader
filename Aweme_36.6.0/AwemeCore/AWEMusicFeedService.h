@class NSString;

@interface AWEMusicFeedService : HTSService <AWEMusicFeedService>

@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlertIfNeedFrom:(id)a0 isMiniLuna:(BOOL)a1;
- (void)showAlertIfNeedFrom:(id)a0 isMiniLuna:(BOOL)a1 confirmBlk:(id /* block */)a2;
- (BOOL)shouldShowLikeGuide;
- (void)changeMusicCollectWithCustom:(unsigned long long)a0 musicId:(id)a1 videoId:(id)a2 scene:(id)a3 trackParam:(id)a4 completion:(id /* block */)a5;
- (void)addToListenMusicLater:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)showListenMusicLaterBottomNotificationWith:(id)a0 extraParams:(id)a1;
- (BOOL)canShowListenMusicLater;
- (void)markListenMusicLaterShow;
- (void)markListenMusicLaterClick;
- (id)musicLabelStringFromModel:(id)a0;
- (void)p_trackFavouriteSongWithCollectType:(unsigned long long)a0 EnterFrom:(id)a1 musicId:(id)a2 groupId:(id)a3;
- (id)p_titleForGuide;
- (id)p_descForGuide;
- (id)p_confirmForGuide;
- (id)p_cancelForGuide;
- (void)p_handleConfirmAction;
- (void)p_gotoDSP:(BOOL)a0 extraParams:(id)a1;
- (id)p_tutorialTypeForGuide;
- (void)p_trackTutorialCompleteWithEnterFrom:(id)a0 type:(id)a1 method:(id)a2;
- (BOOL)p_isMyMusicEntranceShow;
- (void)p_trackTutorialShowWithEnterFrom:(id)a0 type:(id)a1;
- (id)p_musicLabelStringForPGCMusic:(id)a0;
- (BOOL)musicInfoStringSimplify;
- (void).cxx_destruct;

@end
