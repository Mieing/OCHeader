@class NSString, AWEIronManCardModel, NSDictionary;

@interface AWEIronManModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ironManTitle;
@property (copy, nonatomic) NSString *ironManDescription;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) long long type;
@property (nonatomic) long long orientation;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) AWEIronManCardModel *cardModel;
@property (readonly, copy, nonatomic) NSString *aladdinID;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardModelJSONTransformer;
+ (id)aladdinIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (double)imageIconCornerRadius;
- (id)URLSchema;
- (void).cxx_destruct;
- (id)componentSeparator;
- (id)iconImageName;

@end
