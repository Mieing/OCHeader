@class NSString, HTSLiveFeedDataApi;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveActivityFeedSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) NSString *enterScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackFeedLoadDurationWithStartTime:(double)a0 room:(id)a1;
- (void)enterLiveFeedRooms:(id)a0 enterMethod:(id)a1 extra:(id)a2 interceptFromLinkmic:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)p_checkoutEnableJunmpToFeed:(id)a0 enterMethod:(id)a1 interceptFromLinkmic:(BOOL)a2 extra:(id)a3;
- (void)reportMonitorDataServiceName:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 statusCode:(long long)a3 extra:(id)a4;
- (void)openSchemaAfterEnterRoom:(id)a0;
- (void).cxx_destruct;
- (id)_topViewController;

@end
