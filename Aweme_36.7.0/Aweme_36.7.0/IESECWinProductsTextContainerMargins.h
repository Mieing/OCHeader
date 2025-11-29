@class NSString;

@interface IESECWinProductsTextContainerMargins : MTLModel <MTLJSONSerializing>

@property (nonatomic) double left;
@property (nonatomic) double top;
@property (nonatomic) double right;
@property (nonatomic) double bottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
