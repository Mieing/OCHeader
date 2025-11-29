@class NSString;

@interface IESECGoodsDetailAppointMetaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productTitle;
@property (nonatomic) BOOL isAppointment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
