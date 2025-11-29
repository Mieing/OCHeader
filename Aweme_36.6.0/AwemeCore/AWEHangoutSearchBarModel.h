@class NSString;

@interface AWEHangoutSearchBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithJsonObj:(id)a0;
- (void)assignPropWithJsonObj:(id)a0;
- (void).cxx_destruct;

@end
