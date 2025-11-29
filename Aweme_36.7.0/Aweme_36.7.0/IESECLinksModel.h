@class NSString;

@interface IESECLinksModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *appURL;
@property (copy, nonatomic) NSString *innerAppURL;
@property (copy, nonatomic) NSString *universalLinksURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
