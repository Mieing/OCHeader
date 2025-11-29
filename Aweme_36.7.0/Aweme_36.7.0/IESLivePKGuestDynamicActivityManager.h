@class NSString, NSDictionary, HTSLiveInteractiveAPI, IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo;

@interface IESLivePKGuestDynamicActivityManager : NSObject <IESLivePKGuestDynamicActivityProvider>

@property (retain, nonatomic) HTSLiveInteractiveAPI *API;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *applyMessageActivity;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *inviteListActivity;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *waitingListActivity;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *ktvGuideActivity;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *leaveLinkMicActivity;
@property (copy, nonatomic) NSDictionary *activityMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)trackExposureEventForSite:(unsigned long long)a0;
- (void)refreshActivityForSite:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)requestActivityForSites:(id)a0 completion:(id /* block */)a1;
- (void)mergeActivities:(id)a0;
- (void).cxx_destruct;

@end
