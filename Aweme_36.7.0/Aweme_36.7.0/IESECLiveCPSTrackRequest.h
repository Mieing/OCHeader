@class NSString;

@interface IESECLiveCPSTrackRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *cpsTrackStr;

- (id)buildParams;
- (void).cxx_destruct;

@end
