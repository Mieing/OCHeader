@class NSString, AWEUserAvatarDecotationAtmosphereModel, NSNumber, AWEURLModel;

@interface AWEUserAvatarDecotationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *decorationID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEURLModel *sourceURL;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *dynamicSourceURL;
@property (copy, nonatomic) NSString *dynamicSourceURLProfile;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) BOOL isFirstPost;
@property (copy, nonatomic) NSString *configID;
@property (copy, nonatomic) NSString *dynamicSourceURLFeed;
@property (nonatomic) long long btnType;
@property (copy, nonatomic) NSString *btnText;
@property (retain, nonatomic) AWEUserAvatarDecotationAtmosphereModel *atmosphere;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *prepageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceURLJSONTransformer;
+ (id)atmosphereJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
