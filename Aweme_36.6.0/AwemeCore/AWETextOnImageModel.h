@class NSString, IESEffectModel, VETextBoundingRectF;

@interface AWETextOnImageModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *subEffectId;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) id stickerData;
@property (copy, nonatomic) NSString *stickerDataString;
@property (retain, nonatomic) VETextBoundingRectF *RectF;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct CGSize { double width; double height; } previewOutputSize;
@property (nonatomic) BOOL isNewTextSticker;

+ (id)anchorPointJSONTransformer;
+ (id)previewOutputSizeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
