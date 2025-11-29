@class NSString;

@interface AWELiteInviterModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *followTitle;
@property (copy, nonatomic) NSString *sharerUID;
@property (copy, nonatomic) NSString *secSharerUID;
@property (copy, nonatomic) NSString *followText;
@property (nonatomic) long long followType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
