@class NSString, NSDictionary, NSArray, VETextBoundingRectF, IESEffectModel;

@interface AWERecordCaptionFollowShotModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *subEffectId;
@property (copy, nonatomic) NSString *effectName;
@property (retain, nonatomic) VETextBoundingRectF *RectF;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct CGSize { double width; double height; } previewOutputSize;
@property (copy, nonatomic) NSString *currentCaptionUUID;
@property (copy, nonatomic) NSDictionary *captionSlotUUIDToIndexDict;
@property (retain, nonatomic) NSArray *captions;
@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) double roundTime;
@property (copy, nonatomic) NSString *templateEffectId;
@property (copy, nonatomic) NSString *fontEffectId;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long style;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) long long createdBy;
@property (retain, nonatomic) IESEffectModel *effectModel;

+ (id)anchorJSONTransformer;
+ (id)captionsJSONTransformer;
+ (id)anchorPointJSONTransformer;
+ (id)previewOutputSizeJSONTransformer;
+ (id)canvasSizeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
