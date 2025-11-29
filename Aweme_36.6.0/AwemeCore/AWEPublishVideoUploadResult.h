@class NSString, NSNumber, NSDictionary;

@interface AWEPublishVideoUploadResult : AWEBaseBizConfigModel

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *uploadVideoUrl;
@property (copy, nonatomic) NSString *videoResourceId;
@property (copy, nonatomic) NSString *uploadedVideoCoverURI;
@property (retain, nonatomic) NSNumber *uploadVideoTime;
@property (retain, nonatomic) NSNumber *uploadWaitMergeTime;
@property (retain, nonatomic) NSNumber *uploadType;
@property (retain, nonatomic) NSNumber *uploadProbeSpeed;
@property (retain, nonatomic) NSDictionary *uploadVideoMetaInfo;

- (void).cxx_destruct;

@end
