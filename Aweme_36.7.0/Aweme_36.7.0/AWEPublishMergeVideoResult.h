@class NSString, NSDictionary, NSNumber;

@interface AWEPublishMergeVideoResult : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } videoAssetSize;
@property (nonatomic) double videoAssetDuration;
@property (nonatomic) double videoFileSize;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *uploadVideoUrl;
@property (copy, nonatomic) NSDictionary *uploadVideoMetaData;
@property (retain, nonatomic) NSDictionary *mediaEffectInfo;
@property (retain, nonatomic) NSNumber *composePauseDuration;
@property (retain, nonatomic) NSNumber *canTranscodeInBackground;
@property (retain, nonatomic) NSNumber *didTranscodeInBackground;

- (id)initWithIndex:(long long)a0 workspace:(id)a1 mergePath:(id)a2;
- (void).cxx_destruct;

@end
