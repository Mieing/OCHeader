@class NSString, LMImageQualityVideoTransCodeSettings, MediaUtilsVideo, MediaUtilsAudio;

@interface LMImageQualityVideo : NSObject {
    void /* function */ notRemuxErrorcode;
}

@property (nonatomic, retain) MediaUtilsVideo *video;
@property (nonatomic, retain) MediaUtilsAudio *audio;
@property (nonatomic, retain) LMImageQualityVideoTransCodeSettings *transcodeLimit;
@property (nonatomic, retain) LMImageQualityVideoTransCodeSettings *transcode;
@property (nonatomic) BOOL isReencode;
@property (nonatomic, copy) NSString *notRemuxErrorcode;

+ (id)buildWithAsset:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
