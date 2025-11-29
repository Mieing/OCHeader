@class NSString;

@interface AWEUserEnterShowProfileModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long accountType;
@property (nonatomic) long long tabShowType;
@property (nonatomic) long long showCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
