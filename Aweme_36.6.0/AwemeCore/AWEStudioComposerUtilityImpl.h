@class NSString;

@interface AWEStudioComposerUtilityImpl : HTSService <AWEStudioComposerUtilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolABForKey:(id)a0;
- (void)resetUserInteractionEnabled:(BOOL)a0;
- (id)createComposerModelForExportScenario;
- (id)createComposerModelForPublishScenario;
- (id)JSONWithComposerModel:(id)a0;
- (id)composerModelWithJSON:(id)a0;
- (id)composerModelWithPublishViewModel:(id)a0;
- (void)addCameraCellToAlbum:(id)a0;
- (id)log_cleanJSON:(id)a0;
- (id)log_JSONWithComposerModel:(id)a0;
- (id)log_composerModelShortString:(id)a0;

@end
