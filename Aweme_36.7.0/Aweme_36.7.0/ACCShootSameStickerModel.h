@class NSString, AWEInteractionStickerLocationModel, NSDictionary;

@interface ACCShootSameStickerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long stickerType;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *locationModel;
@property (retain, nonatomic) AWEInteractionStickerLocationModel *tempLocationModel;
@property (copy, nonatomic) NSString *stickerModelStr;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (copy, nonatomic) NSDictionary *referExtraParams;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
