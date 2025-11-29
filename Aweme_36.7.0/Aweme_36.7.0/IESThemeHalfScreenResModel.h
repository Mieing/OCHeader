@class NSString;

@interface IESThemeHalfScreenResModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *headUrl;
@property (copy, nonatomic) NSString *bgUrl;
@property (copy, nonatomic) NSString *closeBtnColor;
@property (copy, nonatomic) NSString *guideHeadUrl;
@property (copy, nonatomic) NSString *guideCloseBtnColor;
@property (copy, nonatomic) NSString *tagTextColor;
@property (copy, nonatomic) NSString *tagBgColor;
@property (copy, nonatomic) NSString *padHeadImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
