@class NSArray, NSString;

@interface AWEDTORecordStickerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *segmentStickerModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentStickerModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
