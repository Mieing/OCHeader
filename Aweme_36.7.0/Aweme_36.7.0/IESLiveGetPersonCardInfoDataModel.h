@class NSString;

@interface IESLiveGetPersonCardInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *anchorRelationInfo;
@property (copy, nonatomic) NSString *localInfo;

+ (id)modelCustomPropertyMapper;

@end
