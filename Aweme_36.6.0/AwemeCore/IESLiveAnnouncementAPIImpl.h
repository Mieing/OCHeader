@class NSString;

@interface IESLiveAnnouncementAPIImpl : HTSLiveApi <IESLiveAnnouncementXApi>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribePreAnnouncement:(id)a0 completion:(id /* block */)a1;
- (void)cancelSubscribePreAnnouncement:(id)a0 completion:(id /* block */)a1;

@end
