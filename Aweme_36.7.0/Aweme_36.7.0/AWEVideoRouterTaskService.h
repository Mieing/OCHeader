@class NSString;

@interface AWEVideoRouterTaskService : NSObject <AWEStudioTaskService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createVideoWithTask:(id)a0 info:(id)a1 missionModel:(id)a2 commercialAnchorModel:(id)a3;
- (id)createVideoWithTask:(id)a0 duetAweme:(id)a1 info:(id)a2 missionModel:(id)a3 commercialAnchorModel:(id)a4 isStarAtlas:(BOOL)a5;
- (id)createVideoWithTask:(id)a0 duetAweme:(id)a1 info:(id)a2 missionModel:(id)a3 commercialAnchorModel:(id)a4;
- (id)createVideoWithMissionModel:(id)a0 commercialAnchorModel:(id)a1;
- (id)createVideoWithTask:(id)a0 info:(id)a1 missionModel:(id)a2 commercialAnchorModel:(id)a3 isStarAtlas:(BOOL)a4;

@end
