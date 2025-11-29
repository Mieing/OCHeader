@class NSString, NSDictionary;

@interface IESECLiveEcLeavePageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *pageId;
@property (nonatomic) BOOL canShowPendant;
@property (copy, nonatomic) NSDictionary *pendantEdgeInsets;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
