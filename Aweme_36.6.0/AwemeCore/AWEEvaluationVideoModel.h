@class NSString;

@interface AWEEvaluationVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoName;
@property (copy, nonatomic) NSString *videoURLString;
@property (copy, nonatomic) NSString *videoCodecName;
@property (copy, nonatomic) NSString *videoProfile;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoNBFrames;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoBitRate;
@property (nonatomic) double videoAVGFrameRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
