@interface AWEIMLiveGroupAnnouncementNetwork : NSObject

+ (void)fetchAnnouncementLiveStatusWithGroupId:(id)a0 serverMessageId:(long long)a1 convsersationShortId:(id)a2 appointmentID:(id)a3 completion:(id /* block */)a4;
+ (void)subscribeAnnoucementWithGroupId:(id)a0 status:(BOOL)a1 messageId:(id)a2 serverMessageId:(long long)a3 convsersationShortId:(id)a4 appointmentID:(id)a5 completion:(id /* block */)a6;
+ (void)fetchAnnouncementSummaryWithGroupId:(id)a0 completion:(id /* block */)a1;
+ (void)setRemindWithGroupId:(id)a0 status:(BOOL)a1 appointmentID:(id)a2 completion:(id /* block */)a3;
+ (id)sendBulletLiveGroupAnnouncementMessageWithAnnouncementId:(long long)a0 convShortID:(long long)a1 anchorID:(id)a2 source:(id)a3;

@end
