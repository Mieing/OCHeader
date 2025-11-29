@class NSString, NSDictionary, NSNumber;

@interface IESECGoodsDetailLynxCardElement : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSString *lynxID;
@property (nonatomic) BOOL wrapContent;
@property (nonatomic) BOOL eventThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
