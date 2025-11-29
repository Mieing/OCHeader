@class NSArray, NSString, IESECURLModel;

@interface IESECGoodsMarketingFloorModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *innerIconURLModelArray;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *URL;
@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) IESECURLModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconURLModelArray;
- (void).cxx_destruct;

@end
