@class NSArray, AWEInteractionStickerLocationModel, NSDictionary, ACCTextIntelligenceModel, NSString, AWEStoryTextImageModel;

@interface AWEStudioCaptionInfoModel : ACCBaseApiModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSArray *captions;
@property (retain, nonatomic) AWEStoryTextImageModel *textInfoModel;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *location;
@property (retain, nonatomic) ACCTextIntelligenceModel *intelligenceInfo;
@property (copy, nonatomic) NSDictionary *intelligenceInfos;
@property (copy, nonatomic) NSDictionary *styleConfigs;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSArray *faceInfo;
@property (nonatomic) BOOL highlightReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captionsJSONTransformer;
+ (id)locationJSONTransformer;
+ (id)textInfoModelJSONTransformer;
+ (id)intelligenceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)captionModel;
- (id)initWithCaptionModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)md5;

@end
