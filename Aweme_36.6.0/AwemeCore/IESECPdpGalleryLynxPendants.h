@class NSArray, NSString;

@interface IESECPdpGalleryLynxPendants : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *leftBottom;
@property (copy, nonatomic) NSArray *rightBottom;
@property (copy, nonatomic) NSArray *topLeft;
@property (copy, nonatomic) NSArray *topRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
