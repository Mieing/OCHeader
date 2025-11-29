@class NSNumber, NSString, IESECGoodsPOIDetailModel;

@interface IESECGoodsPOIModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSString *poiListURLString;
@property (retain, nonatomic) IESECGoodsPOIDetailModel *selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
