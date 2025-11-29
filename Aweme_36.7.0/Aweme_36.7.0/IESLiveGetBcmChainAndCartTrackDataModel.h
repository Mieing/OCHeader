@class NSString;

@interface IESLiveGetBcmChainAndCartTrackDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *bcmChain;
@property (copy, nonatomic) NSString *cartTrack;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
