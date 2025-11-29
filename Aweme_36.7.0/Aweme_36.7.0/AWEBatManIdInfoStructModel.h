@class NSString;

@interface AWEBatManIdInfoStructModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *batManId;
@property (copy, nonatomic) NSString *batManName;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *stickerTitle;
@property (nonatomic) long long showStickerTime;
@property (copy, nonatomic) NSString *buttonColor;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *officialPackageId;
@property (nonatomic) BOOL shared;
@property (copy, nonatomic) NSString *batIcon;
@property (copy, nonatomic) NSString *stickerInfoUrl;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *batManDescription;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *controllerImage;
@property (nonatomic) long long leastAppVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
