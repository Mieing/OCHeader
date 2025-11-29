@class NSString, NSDictionary, NSArray, IESECListKitStyleModel;

@interface IESECListKitSectionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double soloChannel_clickTS;
@property (copy, nonatomic) NSDictionary *soloChannel_guideParams;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic) BOOL operationAnimated;
@property (nonatomic) BOOL disableReloadMall;
@property (nonatomic) unsigned long long operationScrollLocation;
@property (nonatomic) long long operationScrollLocationDelay;
@property (nonatomic) unsigned long long sectionType;
@property (copy, nonatomic) NSString *sectionID;
@property (nonatomic) unsigned long long column;
@property (retain, nonatomic) IESECListKitStyleModel *sectionStyle;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSDictionary *abValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)sectionStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
