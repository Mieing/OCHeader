@class NSString;

@interface AWEVideoIntelligentChapterLogParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) double totalCost;
@property (nonatomic) double clientCost;
@property (nonatomic) double getTokenCost;
@property (nonatomic) double extractAudioCost;
@property (nonatomic) double extractFrameCost;
@property (nonatomic) double uploadAudioTosCost;
@property (nonatomic) double uploadFrameTosCost;
@property (nonatomic) double uploadAudioTosUriCost;
@property (nonatomic) double uploadFrameTosUriCost;
@property (nonatomic) double pullingCost;
@property (nonatomic) long long videoDuration;
@property (nonatomic) long long retryType;
@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
