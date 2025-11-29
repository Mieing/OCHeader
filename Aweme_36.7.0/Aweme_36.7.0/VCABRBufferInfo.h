@class NSString;

@interface VCABRBufferInfo : NSObject <IVCABRBufferInfo>

@property (copy, nonatomic, getter=getStreamId) NSString *streamId;
@property (nonatomic, getter=getPlayerAvailDuration) float playerAvailDuration;
@property (nonatomic, getter=getFileAvailSize) long long fileAvailSize;
@property (nonatomic, getter=getHeadSize) long long headSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
