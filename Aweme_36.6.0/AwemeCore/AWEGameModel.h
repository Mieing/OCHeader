@class NSString;

@interface AWEGameModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subLabel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *badge;
@property (copy, nonatomic) NSString *badgeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
