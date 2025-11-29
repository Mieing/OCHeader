@class APCDTOShareSparkData, NSString;

@interface APCDTOStickerInfoExtra : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOShareSparkData *shareSparkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareSparkDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
