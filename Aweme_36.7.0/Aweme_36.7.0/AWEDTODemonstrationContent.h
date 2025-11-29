@class NSString;

@interface AWEDTODemonstrationContent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *videoUrl;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) long long curDuration;
@property (nonatomic) long long totalDuration;
@property (nonatomic) BOOL hasTemplateVideo;
@property (nonatomic) double speedForTrack;
@property (nonatomic) BOOL usedTemplateVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
