@class NSString;

@interface DYAPassportConnectUserItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long aid;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
