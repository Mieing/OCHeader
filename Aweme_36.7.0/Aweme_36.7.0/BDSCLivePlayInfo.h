@class NSString, NSNumber, NSArray;

@interface BDSCLivePlayInfo : NSObject

@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *h265StreamData;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) BOOL didChangeCamera;
@property (copy, nonatomic) NSString *targetCameraTitle;
@property (nonatomic) BOOL enableSeek;
@property (copy, nonatomic) NSString *cameraID;
@property (copy, nonatomic) NSArray *qualityInfoArray;
@property (copy, nonatomic) NSString *targetQualityKey;
@property (nonatomic) long long roomStartTime;

- (void).cxx_destruct;

@end
