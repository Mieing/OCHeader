@class NSString;

@interface AWEIMShareSubInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *location;
@property (nonatomic) long long discountPrice;
@property (nonatomic) long long price;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
