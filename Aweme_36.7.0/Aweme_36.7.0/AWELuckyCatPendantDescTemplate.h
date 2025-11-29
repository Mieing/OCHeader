@class NSString, AWELuckyCatPendantIcon, NSDictionary, NSArray, AWELuckyCatPendantScrollNumbers;

@interface AWELuckyCatPendantDescTemplate : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateTitle;
@property (copy, nonatomic) NSString *textType;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) unsigned long long fontSize;
@property (nonatomic) unsigned long long altFontSize;
@property (copy, nonatomic) NSString *color;
@property (retain, nonatomic) AWELuckyCatPendantIcon *pendantIcon;
@property (copy, nonatomic) NSDictionary *templateElementMap;
@property (copy, nonatomic) NSArray *combineTexts;
@property (retain, nonatomic) AWELuckyCatPendantScrollNumbers *scrollNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)combineTextsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
