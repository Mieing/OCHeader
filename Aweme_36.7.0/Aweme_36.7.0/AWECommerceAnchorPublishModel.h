@class NSString, NSDictionary, AWEAnchorToast, AWEURLModel;

@interface AWECommerceAnchorPublishModel : MTLModel <AWEStudioCommerceAnchorPublishModelProtocol, MTLJSONSerializing>

@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *cachedLogExtra;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *webURL;
@property (retain, nonatomic) AWEURLModel *addedIcon;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isBeta;
@property (copy, nonatomic) NSString *hashTag;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) AWEAnchorToast *toastContent;
@property (copy, nonatomic) NSString *bizSource;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSDictionary *externalAnchorInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)addedIconJSONTransformer;
+ (id)toastContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtraDic;
- (void).cxx_destruct;

@end
