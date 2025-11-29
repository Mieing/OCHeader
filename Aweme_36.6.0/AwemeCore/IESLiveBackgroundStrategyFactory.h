@class NSDictionary, IESLiveBackgroundStrategy;

@interface IESLiveBackgroundStrategyFactory : NSObject

@property (retain, nonatomic) IESLiveBackgroundStrategy *lastStrategy;
@property (copy, nonatomic) NSDictionary *blurImageParams;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL showBlackBgIfNeed;
@property (nonatomic) BOOL showMatchRoomLandscapeBg;

+ (id)prepareLocalImgForRoom:(id)a0 hasBackgroundUrl:(BOOL)a1;
+ (id)preparePlaceHolderImgForRoom:(id)a0 hasBackgroundUrl:(BOOL)a1;

- (id)userService;
- (id)strategyForRoom:(id)a0;
- (void)processBlurImageParams:(id)a0;
- (BOOL)isAnchorForRoom:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
