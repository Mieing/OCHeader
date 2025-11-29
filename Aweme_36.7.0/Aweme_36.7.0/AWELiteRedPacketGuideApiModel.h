@class AWELiteRedPacketGuideInfo;

@interface AWELiteRedPacketGuideApiModel : AWELiteRedPacketBaseApiModel

@property (retain, nonatomic) AWELiteRedPacketGuideInfo *guide;

+ (id)guideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
