@class NSString, NSDictionary, IESLiveLinkLiveRTCEngineConfig, IESLiveLinkLiveRTCVideoParam;

@interface IESLiveLinkLiveRTCExtInfo : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *rtcBusinessId;
@property (copy, nonatomic) NSString *rtcSceneTag;
@property (retain, nonatomic) IESLiveLinkLiveRTCEngineConfig *liveRTCEngineConfig;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoParam *liveRTCVideoParam;

- (void)parseRawData:(id)a0;
- (void)parseRTCEngineConfigWithRawData:(id)a0;
- (void)parseRTCVideoParamsWithRawData:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end
