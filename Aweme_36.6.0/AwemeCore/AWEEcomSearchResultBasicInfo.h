@class NSString;

@interface AWEEcomSearchResultBasicInfo : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long resultFrom;
@property (nonatomic) long long queryCorrectType;
@property (copy, nonatomic) NSString *ecomSearchAllPassThrough;
@property (nonatomic) BOOL hasSidebar;
@property (copy, nonatomic) NSString *imageQueryUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
