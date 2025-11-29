@class NSString, NSArray, AWEVideoModel, AWEAdPlayableAudioInfo;

@interface AWEAdInteractiveVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) long long videoType;
@property (retain, nonatomic) AWEVideoModel *video;
@property (retain, nonatomic) AWEAdPlayableAudioInfo *audioInfo;
@property (copy, nonatomic) NSArray *nextGroupAwemeIDs;
@property (copy, nonatomic) NSString *playableCurrentSectionRemark;
@property (copy, nonatomic) NSString *playableCurrentSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
