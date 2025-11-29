@class NSString, NSAttributedString;

@interface AWEECOMIMSubCardPriceTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSAttributedString *displayAttriString;
@property (copy, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *fmtString;
@property (copy, nonatomic) NSString *valueString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)textColor;

@end
