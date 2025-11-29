@class NSNumber, NSString;

@interface IESLiveGameGetGeckoInfoDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *geckoVersion;
@property (copy, nonatomic) NSString *geckoVersionString;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
