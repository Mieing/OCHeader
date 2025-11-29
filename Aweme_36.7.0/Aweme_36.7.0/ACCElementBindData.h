@class NSString, NSArray, AWEQuickFlashStickerModel;

@interface ACCElementBindData : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *bindType;
@property (readonly, nonatomic) long long targetType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *sourceList;
@property (readonly, nonatomic) AWEQuickFlashStickerModel *flashMobSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceListJSONTransformer;
+ (id)flashMobStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
