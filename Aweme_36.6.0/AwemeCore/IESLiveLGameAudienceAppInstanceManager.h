@class IESLiveLGameAudienceAppInstance, IESLiveLGameAudienceModel;

@interface IESLiveLGameAudienceAppInstanceManager : NSObject

@property (retain, nonatomic) IESLiveLGameAudienceModel *audienceModel;
@property (retain, nonatomic) IESLiveLGameAudienceAppInstance *gameInstance;
@property (nonatomic) BOOL hasCleanGameCache;

- (long long)currentGameOrientation;
- (void)p_createGameInstanceIfNeed:(id)a0 schema:(id)a1 instanceDelegate:(id)a2;
- (BOOL)gameHasOpened:(id)a0;
- (void)bringGameToForeground:(id)a0 schema:(id)a1 instanceDelegate:(id)a2;
- (void)cleanGameCache:(id)a0 schema:(id)a1;
- (BOOL)gameIsInForeground;
- (void).cxx_destruct;

@end
