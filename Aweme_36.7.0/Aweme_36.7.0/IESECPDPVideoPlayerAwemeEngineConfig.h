@class NSString, NSDictionary;

@interface IESECPDPVideoPlayerAwemeEngineConfig : IESECPDPVideoPlayerEngineConfig

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSDictionary *awemeVideoModelDict;

- (void)updateWithOldPlayerConfig:(id)a0;
- (void).cxx_destruct;
- (id)videoID;

@end
