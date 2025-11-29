@interface IESLiveAnnouncementApi : HTSLiveApi

- (void)updateLiveAnnouncementStickerSwitchStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)queryAnnouncementStatus:(id)a0 isCycle:(BOOL)a1 completion:(id /* block */)a2;
- (void)commitAnnouncementAction:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllAnnouncementsInfoWithCompletion:(id /* block */)a0 isFromAnnouncement:(BOOL)a1;
- (void)fetchRandomContentCurrent:(id)a0 completion:(id /* block */)a1;
- (void)subscribePreAnnouncement:(id)a0 completion:(id /* block */)a1;
- (void)cancelSubscribePreAnnouncement:(id)a0 completion:(id /* block */)a1;
- (void)queryVideoListWithAnnouncementId:(long long)a0 completion:(id /* block */)a1;
- (void)publishPreAnnouncementWithUserID:(id)a0 announcementID:(long long)a1 completion:(id /* block */)a2;
- (void)unpublishPreAnnouncementWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)requestIMShareWithAnchorID:(id)a0 appointmentID:(id)a1 completion:(id /* block */)a2;
- (void)sendIMMessageWithAnchorID:(id)a0 appointmentID:(id)a1 source:(id)a2 toGroup:(id)a3 completion:(id /* block */)a4;

@end
