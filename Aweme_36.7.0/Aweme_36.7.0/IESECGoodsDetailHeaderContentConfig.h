@class NSString;

@interface IESECGoodsDetailHeaderContentConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableMediaAsyncScroll;
@property (nonatomic) BOOL enableSliceAsyncScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
