@class NSString;

@interface BDECPigeonUserInfoModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pigeonUid;
@property (copy, nonatomic) NSString *nick;
@property (copy, nonatomic) NSString *avatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
