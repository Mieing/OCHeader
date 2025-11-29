@class NSString;

@interface AWELeftSideBarListCellLeftIconModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *dark;
@property (copy, nonatomic) NSString *light;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
