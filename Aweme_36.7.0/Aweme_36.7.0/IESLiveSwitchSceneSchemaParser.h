@class NSString;

@interface IESLiveSwitchSceneSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_handleAnchorSwitch:(id)a0 completion:(id /* block */)a1;
- (void)p_handleAudienceSwitch:(id)a0 completion:(id /* block */)a1;
- (id)strWithLayout:(int)a0;
- (void)p_handleBigPartyWithParams:(id)a0 layout:(int)a1 toLayout:(id)a2 completion:(id /* block */)a3;
- (void)p_openStartLivePage:(id)a0;
- (BOOL)isConnected;
- (BOOL)isAnchor;

@end
