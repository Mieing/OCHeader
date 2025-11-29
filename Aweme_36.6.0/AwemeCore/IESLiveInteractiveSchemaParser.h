@class NSString;

@interface IESLiveInteractiveSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (id)pr_startGameWithGameId:(id)a0;
- (id)pr_startGameOpenPlatformWithParams:(id)a0;
- (void)pr_startGameWithGameId:(id)a0 schema:(id)a1 source:(id)a2 name:(id)a3;
- (void)startGameFromIntroductionPage:(id)a0 castScreenSwitch:(id)a1 explainCardSwitch:(id)a2 params:(id)a3;

@end
