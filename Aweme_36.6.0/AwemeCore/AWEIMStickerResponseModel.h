@class NSNumber, NSArray;

@interface AWEIMStickerResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long packageType;
@property (retain, nonatomic) NSArray *stickers;
@property (retain, nonatomic) NSNumber *identifier;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
