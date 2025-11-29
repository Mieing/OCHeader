@class NSString;

@interface AWEUserProfileWeightModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long avatar;
@property (nonatomic) long long nickname;
@property (nonatomic) long long signature;
@property (nonatomic) long long gender;
@property (nonatomic) long long birthday;
@property (nonatomic) long long location;
@property (nonatomic) long long school;
@property (nonatomic) long long cover;
@property (nonatomic) long long shortId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
