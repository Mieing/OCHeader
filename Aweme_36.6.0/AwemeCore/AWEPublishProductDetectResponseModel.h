@class NSString;

@interface AWEPublishProductDetectResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *itemInfo;
@property (nonatomic) long long remainCount;
@property (nonatomic) BOOL allowShopping;
@property (nonatomic) BOOL allowStarAtlas;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *countOverText;
@property (copy, nonatomic) NSString *networkErrMsg;
@property (copy, nonatomic) NSString *privateNotAllowText;
@property (copy, nonatomic) NSString *shoppingNotAllowText;
@property (copy, nonatomic) NSString *starAtlasNotAllowText;
@property (copy, nonatomic) NSString *notAllowText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
