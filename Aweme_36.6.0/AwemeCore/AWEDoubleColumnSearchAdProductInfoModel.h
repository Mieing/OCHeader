@class NSNumber, NSString;

@interface AWEDoubleColumnSearchAdProductInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *productIDString;
@property (retain, nonatomic) NSNumber *productPrice;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *ironManUrl;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *btnText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
