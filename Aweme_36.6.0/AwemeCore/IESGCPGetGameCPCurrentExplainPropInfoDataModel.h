@class NSString;

@interface IESGCPGetGameCPCurrentExplainPropInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *propId;
@property (copy, nonatomic) NSString *propName;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
