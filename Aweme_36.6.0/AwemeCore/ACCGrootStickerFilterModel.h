@class NSArray, NSDictionary, NSString, NSNumber;

@interface ACCGrootStickerFilterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *hasGroot;
@property (copy, nonatomic) NSArray *grootDetailStickerModels;
@property (nonatomic) BOOL allowGrootResearch;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *userGrootInfo;
@property (nonatomic) BOOL fromRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)grootDetailStickerModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
