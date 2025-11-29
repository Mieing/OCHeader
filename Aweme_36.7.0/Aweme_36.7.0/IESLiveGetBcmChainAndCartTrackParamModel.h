@class NSString, NSDictionary;

@interface IESLiveGetBcmChainAndCartTrackParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *cartTrack;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
