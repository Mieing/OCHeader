@class NSString, NSNumber;

@interface IESGCPGamecpAttributionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *promoterId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *componentTypeString;
@property (retain, nonatomic) NSNumber *componentAction;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
