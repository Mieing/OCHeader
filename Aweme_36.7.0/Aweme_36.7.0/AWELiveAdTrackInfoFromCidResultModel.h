@class NSString;

@interface AWELiveAdTrackInfoFromCidResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
