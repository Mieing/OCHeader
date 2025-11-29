@class NSString;

@interface IESGCPGameCpOpenAppStoreParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *iosAppId;
@property (copy, nonatomic) NSString *openGameURL;
@property (copy, nonatomic) NSString *activeLink;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (copy, nonatomic) NSString *viewTrackInfo;
@property (copy, nonatomic) NSString *packageInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
