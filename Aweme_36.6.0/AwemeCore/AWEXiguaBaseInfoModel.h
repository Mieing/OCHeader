@class NSString;

@interface AWEXiguaBaseInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *xiguaStarAtlasOrderId;
@property (nonatomic) BOOL isXiguaStarAtlasVideo;
@property (nonatomic) long long xiguaPrivacyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidStatus;
- (void).cxx_destruct;

@end
