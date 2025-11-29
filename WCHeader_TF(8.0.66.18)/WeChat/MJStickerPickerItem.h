@class NSString, OMJMaterialInfo, UIImage;

@interface MJStickerPickerItem : NSObject

@property (retain, nonatomic) OMJMaterialInfo *material;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isMultiSubtitlesSupported;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *previewImageURL;
@property (retain, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSString *materialName;

+ (unsigned long long)convertStickerItemTypeFrom:(unsigned long long)a0;
+ (id)pingFangItemWithType:(unsigned long long)a0;
+ (id)noneTextAnimItem;
+ (id)defaultTextAnimItem;

- (id)initWithMaterial:(id)a0 type:(unsigned long long)a1;
- (id)initWithMaterial:(id)a0 type:(unsigned long long)a1 isLocal:(BOOL)a2;
- (void)configWithExtraInfo:(id)a0;
- (void).cxx_destruct;

@end
