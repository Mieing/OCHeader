@class NSString;

@interface AWEECProfilePadding : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long left;
@property (nonatomic) long long right;
@property (nonatomic) long long top;
@property (nonatomic) long long bottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
