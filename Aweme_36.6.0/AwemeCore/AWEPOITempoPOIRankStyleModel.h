@class NSString;

@interface AWEPOITempoPOIRankStyleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagLength;
@property (nonatomic) long long tagHeight;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *textFontColor;
@property (copy, nonatomic) NSString *textBgColor;
@property (nonatomic) long long prefixIconWidth;
@property (nonatomic) long long prefixIconHeight;
@property (nonatomic) long long prefixIconPaddingRight;
@property (nonatomic) long long suffixIconHeight;
@property (nonatomic) long long suffixIconWidth;
@property (copy, nonatomic) NSString *tagUrl;
@property (copy, nonatomic) NSString *suffixIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
