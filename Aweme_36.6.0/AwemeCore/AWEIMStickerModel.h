@class NSString, NSDictionary, NSNumber, AWEURLModel;

@interface AWEIMStickerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *authorSecUid;
@property (copy, nonatomic) NSNumber *storePackageId;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *emojiType;
@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *staticType;
@property (retain, nonatomic) AWEURLModel *staticURLModel;
@property (copy, nonatomic) NSString *animateType;
@property (retain, nonatomic) AWEURLModel *animateURLModel;
@property (retain, nonatomic) AWEURLModel *thumbnailURLModel;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSNumber *originPackageID;
@property (copy, nonatomic) NSString *hashString;
@property (retain, nonatomic) NSNumber *resourcePackageID;
@property (copy, nonatomic) NSString *imageType;
@property (retain, nonatomic) NSDictionary *author;
@property (copy, nonatomic) NSString *heycanIdentifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *sourceDescription;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)staticURLModelJSONTransformer;
+ (id)animateURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)identifierJSONTransformer;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
