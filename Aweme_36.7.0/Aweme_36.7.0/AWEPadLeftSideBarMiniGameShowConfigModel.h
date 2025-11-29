@class NSString;

@interface AWEPadLeftSideBarMiniGameShowConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) int showNum;
@property (nonatomic) int columnNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
