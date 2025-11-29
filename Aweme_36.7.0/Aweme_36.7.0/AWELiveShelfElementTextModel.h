@class NSString, NSNumber;

@interface AWELiveShelfElementTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *fontFamily;
@property (copy, nonatomic) NSString *fontColor;
@property (copy, nonatomic) NSNumber *fontSize;
@property (copy, nonatomic) NSNumber *fontWeight;
@property (copy, nonatomic) NSString *fontStyle;
@property (nonatomic) BOOL strikethrough;
@property (copy, nonatomic) NSNumber *delimiter;
@property (copy, nonatomic) NSNumber *marginLeft;
@property (copy, nonatomic) NSNumber *marginRight;
@property (copy, nonatomic) NSNumber *marginTop;
@property (copy, nonatomic) NSNumber *marginBottom;
@property (copy, nonatomic) NSNumber *paddingLeft;
@property (copy, nonatomic) NSNumber *paddingRight;
@property (copy, nonatomic) NSNumber *paddingTop;
@property (copy, nonatomic) NSNumber *paddingBottom;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL abbreviated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
