@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeSearchGalleryMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *loop;
@property (retain, nonatomic) NSNumber *showBackButton;
@property (copy, nonatomic) NSString *openType;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *presentOverFullScreen;
@property (retain, nonatomic) NSNumber *androidUseHighQuality;
@property (retain, nonatomic) NSNumber *enableShield;
@property (copy, nonatomic) NSString *btmPageId;
@property (copy, nonatomic) NSString *btmId;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *thumbImages;
@property (retain, nonatomic) NSArray *descriptionList;
@property (retain, nonatomic) NSArray *linkList;
@property (copy, nonatomic) NSDictionary *logData;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
