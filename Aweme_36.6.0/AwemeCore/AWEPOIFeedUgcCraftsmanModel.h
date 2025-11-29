@class NSString;

@interface AWEPOIFeedUgcCraftsmanModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *redirectUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
