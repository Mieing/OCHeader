@class NSString, IESLiveAnchorInteractiveGameXplayModel, IESLiveAnchorInteractiveNativeGameInfo;

@interface IESLiveAnchorInteractiveGameOpenPlatformGameExtra : IESLiveAnchorInteractiveBaseExtra

@property (retain, nonatomic) NSString *developInfo;
@property (retain, nonatomic) NSString *app_version;
@property (copy, nonatomic) NSString *anchorRatioV2;
@property (nonatomic) long long businessType;
@property (nonatomic) BOOL hideUserEntrance;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameXplayModel *gameEngineInfo;
@property (retain, nonatomic) IESLiveAnchorInteractiveNativeGameInfo *nativeGameInfo;

+ (id)gameEngineInfoJSONTransformer;
+ (id)inductionViewImageUrlArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)configGameInfo;
- (void)afterDataResolved;
- (void).cxx_destruct;

@end
