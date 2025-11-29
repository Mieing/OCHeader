@class NSString;

@interface IESECLiveGoodsStateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *buyer;
@property (copy, nonatomic) NSString *order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
