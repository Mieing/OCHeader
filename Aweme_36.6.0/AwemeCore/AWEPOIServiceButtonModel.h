@class NSString;

@interface AWEPOIServiceButtonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long displayType;
@property (copy, nonatomic) NSString *buttonName;
@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) unsigned long long platformSource;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) BOOL disableCollect;
@property (nonatomic) long long buttonActionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
