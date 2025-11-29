@class NSArray, IESLiveGameInteractStickerTemplate01RoleInfo;

@interface IESLiveGameInteractStickerTemplate01Model : NSObject

@property (nonatomic) long long gameState;
@property (retain, nonatomic) IESLiveGameInteractStickerTemplate01RoleInfo *roleInfo;
@property (copy, nonatomic) NSArray *liveInfoList;
@property (copy, nonatomic) NSArray *displayConfigs;

+ (id)modelWithDict:(id)a0;

- (id)portraitDisplayConfig;
- (void).cxx_destruct;

@end
