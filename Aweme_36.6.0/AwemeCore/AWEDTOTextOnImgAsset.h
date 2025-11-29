@class NSString;

@interface AWEDTOTextOnImgAsset : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *subEffectId;
@property (copy, nonatomic) NSString *stickerData;
@property (nonatomic) BOOL isNewTextSticker;
@property (nonatomic) double anchorPointX;
@property (nonatomic) double anchorPointY;
@property (nonatomic) double previewOutputWidth;
@property (nonatomic) double previewOutputHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
