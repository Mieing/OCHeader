@class NSDictionary, NSString;

@interface IESLiveGetDressInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *dressInfo;
@property (copy, nonatomic) NSString *dressInfoString;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
