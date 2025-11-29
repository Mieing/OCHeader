@class NSString;

@interface AWESiriOpenPageIntentsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openPageDescription;
@property (copy, nonatomic) NSString *jumpScheme;
@property (copy, nonatomic) NSString *iconImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
