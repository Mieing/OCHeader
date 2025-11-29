@class NSString;

@interface IESGCPAudienceDetailSchemaParser : NSObject <IESGCPSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schema;

- (id)getAndTrackAudienceDetailOpenModelWithWithParams:(id)a0 trackLocation:(id)a1;
- (id)trackAudienceDetailOpenModelWithParams:(id)a0 trackLocation:(id)a1;
- (id)getAudienceDetailOpenModelWithWithParams:(id)a0 trackID:(id)a1;
- (void)reportGameDetailLaunchStart:(id)a0 gameId:(id)a1 promoteScene:(unsigned long long)a2 enterFrom:(id)a3;
- (void)handleSchemaWithParams:(id)a0 completion:(id /* block */)a1;
- (id)getViewControllerWithParams:(id)a0;
- (void)addDebug:(id)a0;

@end
