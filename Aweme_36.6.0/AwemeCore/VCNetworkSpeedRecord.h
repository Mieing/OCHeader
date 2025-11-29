@class NSString;

@interface VCNetworkSpeedRecord : NSObject <IVCNetworkSpeedRecord>

@property (copy, nonatomic, getter=getStreamId) NSString *streamId;
@property (nonatomic, getter=getTrackType) int trackType;
@property (nonatomic, getter=getBytes) long long bytes;
@property (nonatomic, getter=getTime) long long time;
@property (nonatomic, getter=getTimestamp) long long timestamp;
@property (nonatomic, getter=getRtt) long long rtt;
@property (nonatomic, getter=getLastRecvDate) long long lastRecvDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
