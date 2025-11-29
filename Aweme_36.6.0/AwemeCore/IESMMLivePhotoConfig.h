@class NSString;

@interface IESMMLivePhotoConfig : NSObject

@property (nonatomic) double cacheTime;
@property (nonatomic) BOOL needRecordAudio;
@property (nonatomic) BOOL clearCacheAfterStop;
@property (copy, nonatomic) NSString *livephotoCachePath;
@property (nonatomic) double recordRate;

- (void).cxx_destruct;
- (id)init;

@end
