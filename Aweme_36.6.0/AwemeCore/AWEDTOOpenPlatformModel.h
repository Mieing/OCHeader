@class NSString;

@interface AWEDTOOpenPlatformModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shareId;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
