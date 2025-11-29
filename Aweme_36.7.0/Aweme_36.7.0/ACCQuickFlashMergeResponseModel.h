@class AWEQuickFlashStickerModel, NSString, IESEffectModel, NSNumber;

@interface ACCQuickFlashMergeResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL findSameText;
@property (retain, nonatomic) AWEQuickFlashStickerModel *sticker;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
