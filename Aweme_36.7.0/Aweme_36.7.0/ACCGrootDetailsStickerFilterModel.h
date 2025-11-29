@class NSString, NSNumber;

@interface ACCGrootDetailsStickerFilterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *speciesName;
@property (copy, nonatomic) NSNumber *prob;
@property (copy, nonatomic) NSNumber *baikeId;
@property (copy, nonatomic) NSString *baikeHeadImage;
@property (copy, nonatomic) NSString *baikeIcon;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *engName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
