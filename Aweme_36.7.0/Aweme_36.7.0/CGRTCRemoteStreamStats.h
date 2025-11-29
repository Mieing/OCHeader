@class NSString, CGRTCRemoteAudioStats, CGRTCRemoteVideoStats;

@interface CGRTCRemoteStreamStats : NSObject

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) CGRTCRemoteAudioStats *audioStats;
@property (retain, nonatomic) CGRTCRemoteVideoStats *videoStats;
@property (nonatomic) long long remoteTxQuality;
@property (nonatomic) long long remoteRxQuality;
@property (nonatomic) BOOL isScreen;

- (void).cxx_destruct;

@end
