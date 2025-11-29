@class NSArray, NSString;

@interface ACCQuickFlashEditToolBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *stickerModels;
@property (nonatomic) BOOL cantDisplay;
@property (nonatomic) BOOL isHotList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
