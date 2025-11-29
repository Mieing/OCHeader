@class NSString;

@interface AWETeenParentManagePrefer : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
