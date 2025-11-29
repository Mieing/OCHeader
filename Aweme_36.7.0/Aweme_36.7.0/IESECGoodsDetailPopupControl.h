@class NSString;

@interface IESECGoodsDetailPopupControl : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupURL;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *popupKey;
@property (nonatomic) BOOL skipClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
