@class NSString;

@interface IESIMSendMessageControllerPluginImpl : NSObject <IESIMSendMessageControllerPlugin>

@property (nonatomic) BOOL isAdsFromFeed;
@property (copy, nonatomic) NSString *itemIDFromFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)addAccumulateRecentSendInfoModels:(id)a0;
- (void)handleItemIDFromFeed:(id)a0;
- (BOOL)reportIMShareWithMessage:(id)a0 enterFrom:(id)a1;
- (id)recentSharedIdsWithContext:(id)a0;
- (void)handleSender_resendMessage:(id)a0 withParams:(id)a1;
- (void)reportIMShareWithMessage:(id)a0 inConversation:(id)a1 enterFrom:(id)a2;
- (BOOL)isSuccessReportIMShareWithMessage:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
