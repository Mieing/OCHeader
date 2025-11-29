@class NSString;

@interface AWEVideoRouterChallengeService : NSObject <AWEStudioChallengeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMVVideoWithChallenge:(id)a0 mvID:(id)a1 info:(id)a2 repoMissionModel:(id)a3 commercialAnchorModel:(id)a4;
- (id)createVideoWithChallenge:(id)a0 fromChallengeDetail:(BOOL)a1 info:(id)a2 commercialAnchorModel:(id)a3;
- (id)createVideoWithChallenge:(id)a0 duetAweme:(id)a1 fromChallengeDetail:(BOOL)a2 info:(id)a3 commercialAnchorModel:(id)a4;
- (id)createVideoWithChallenge:(id)a0 poiInfo:(id)a1 music:(id)a2 stickerID:(id)a3 fromChallengeDetail:(BOOL)a4 info:(id)a5 commercialAnchorModel:(id)a6;
- (id)createVideoWithChallenge:(id)a0 publishViewModel:(id)a1 poiInfo:(id)a2 music:(id)a3 stickerID:(id)a4 fromChallengeDetail:(BOOL)a5;
- (id)createMVVideoWithChallenge:(id)a0 mvID:(id)a1 info:(id)a2 commercialAnchorModel:(id)a3;
- (id)startWithChallenge:(id)a0 duetAweme:(id)a1 poiInfo:(id)a2 music:(id)a3 stickerID:(id)a4 fromChallengeDetail:(BOOL)a5 info:(id)a6 commercialAnchorModel:(id)a7;
- (void)prepareInputDataWithChallenge:(id)a0 poiInfo:(id)a1 musicInfo:(id)a2 stickerID:(id)a3 publishModel:(id)a4 fromChallengeDetail:(BOOL)a5 info:(id)a6 completion:(id /* block */)a7;
- (void)prepareInputDataWithChallenge:(id)a0 publishModel:(id)a1 fromChallengeDetail:(BOOL)a2 info:(id)a3 completion:(id /* block */)a4;

@end
