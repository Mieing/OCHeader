@class NSString, NSArray, IESECListKitDeviceScoreConfig;

@interface IESECListKitPreloadItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long preloadCount;
@property (nonatomic) long long columnNum;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) double marginH;
@property (copy, nonatomic) NSArray *supportOS;
@property (retain, nonatomic) IESECListKitDeviceScoreConfig *deviceScore;
@property (copy, nonatomic) NSString *schemaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)osJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
