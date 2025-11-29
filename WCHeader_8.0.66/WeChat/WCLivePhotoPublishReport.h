@class NSString;

@interface WCLivePhotoPublishReport : NSObject

@property (readonly, nonatomic) NSString *snsPublishSessionid;
@property (nonatomic) long long liveClickScene;
@property (nonatomic) long long liveDurationMs;
@property (nonatomic) long long liveAbnormalType;
@property (retain, nonatomic) NSString *picMd5;

- (void)reportLivePhotoAbnormalEvent;
- (void)reportLivePhotoSelectEvent;
- (void).cxx_destruct;

@end
