@class NSString;

@interface AWEIMMixPhotoJumpInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
