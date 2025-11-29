@class NSString;

@interface AWEPadLeftSideBarListCellBackgroundModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dark;
@property (copy, nonatomic) NSString *light;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
