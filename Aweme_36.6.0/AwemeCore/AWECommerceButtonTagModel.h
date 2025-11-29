@class NSString;

@interface AWECommerceButtonTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
