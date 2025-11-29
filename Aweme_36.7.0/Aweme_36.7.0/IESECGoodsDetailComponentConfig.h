@class NSString;

@interface IESECGoodsDetailComponentConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL banRefresh;
@property (nonatomic) BOOL endDisplayActionNeedGroupDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
