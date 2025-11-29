@class NSString;

@interface AWEStudioTemplatePixelService : NSObject <AWEStudioTemplatePixelServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableOCMusicBeatsDynamicTemplateFollow;
- (BOOL)isMusicBeatsDynamicTemplate:(id)a0;
- (id)musicIdForMusicBeatsDynamicTemplate:(id)a0;
- (BOOL)isOnlyAIAvatarSlotsTemplate:(id)a0;
- (BOOL)isSlotsContainingPreprocessType:(unsigned long long)a0 slot:(id)a1;
- (void)fetchTemplateModelWithTemplateId:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)enableOCMusicBeatsDynamicTemplateFollowMusicDetail;
- (void)downloadTemplateIfNeeded:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchTemplateModelWithMusicId:(id)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)enableOCDynamicTemplateAutoUseMusicForMusicDetailOCF;
- (BOOL)isNewDynamicTemplate:(id)a0;

@end
