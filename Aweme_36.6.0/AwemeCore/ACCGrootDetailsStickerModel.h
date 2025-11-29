@class NSString, NSNumber;

@interface ACCGrootDetailsStickerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isDummy;
@property (copy, nonatomic) NSString *speciesName;
@property (copy, nonatomic) NSString *commonName;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSNumber *prob;
@property (copy, nonatomic) NSNumber *baikeId;
@property (copy, nonatomic) NSString *baikeHeadImage;
@property (copy, nonatomic) NSString *baikeIcon;
@property (copy, nonatomic) NSString *engName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
