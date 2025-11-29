@class NSString;

@interface AWELiteActivityPopupMiddleBlockModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *leftImgUrl;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *rightImgUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
