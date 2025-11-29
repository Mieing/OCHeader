@class NSArray, NSString;

@interface AWEDTOInteractionViewStickerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *stickerList;
@property (copy, nonatomic) NSString *iosPoiImage;
@property (nonatomic) long long continueWritingCount;
@property (copy, nonatomic) NSArray *globalStickerList;
@property (nonatomic) long long instanceStickerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerListJSONTransformer;
+ (id)globalStickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
