@class NSString;

@interface AWECreatorDiagnoseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long diagnoseType;
@property (nonatomic) long long diagnoseStyle;
@property (copy, nonatomic) NSString *disableExtra;
@property (copy, nonatomic) NSString *bizLogExtra;
@property (copy, nonatomic) NSString *bizData;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *outsideDesc;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *tabDesc;
@property (copy, nonatomic) NSString *typeDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageAlbumQualityLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
