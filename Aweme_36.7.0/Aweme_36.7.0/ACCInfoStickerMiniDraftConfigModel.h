@class NSString, ACCStickerTimerange, NSArray, ACCStickerMaterialInfo, ACCStickerTransformInfo;

@interface ACCInfoStickerMiniDraftConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) ACCStickerTimerange *timerange;
@property (retain, nonatomic) ACCStickerTransformInfo *transform;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSArray *stickerAnimations;
@property (retain, nonatomic) ACCStickerMaterialInfo *materialInfo;
@property (copy, nonatomic) NSString *move_flag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)materialInfoJSONTransformer;
+ (id)timerangeJSONTransformer;
+ (id)transformJSONTransformer;
+ (id)stickerAnimationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
