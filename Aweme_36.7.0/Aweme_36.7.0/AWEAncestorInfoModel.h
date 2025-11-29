@class NSString;

@interface AWEAncestorInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) int productId;
@property (nonatomic) long long gid;
@property (nonatomic) long long uid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
