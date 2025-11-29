@class NSString;

@interface IESECOrderListTabIndicatorUIConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double bottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
