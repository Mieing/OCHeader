@class NSString;

@interface WCLivePhotoBrowseReport : NSObject

@property (nonatomic) long long livePhotoExpFrom;
@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) NSString *snsSessionId;
@property (retain, nonatomic) NSString *snsObjectType;
@property (retain, nonatomic) NSString *snsFeedId;
@property (retain, nonatomic) NSString *snsPublishSessionId;
@property (retain, nonatomic) NSString *livePhotoSid;
@property (nonatomic) long long livePlayTimingType;
@property (nonatomic) long long liveDurationMs;

+ (id)generateLivePhotoSessionId;
+ (void)reportLivePhotoCloseData:(id)a0;

- (void)reportLivePhotoPlayData;
- (void)reportLivePhotoExposeData;
- (void).cxx_destruct;

@end
