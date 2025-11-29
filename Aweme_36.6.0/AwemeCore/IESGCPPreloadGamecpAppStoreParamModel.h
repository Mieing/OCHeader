@class NSString;

@interface IESGCPPreloadGamecpAppStoreParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *iosAppId;
@property (copy, nonatomic) NSString *openGameURL;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *promoteInstanceId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
