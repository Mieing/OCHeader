@class NSString;

@interface AWEToutiaoGoodsVirtualModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isVirtual;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
