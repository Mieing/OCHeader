@class NSNumber, UIColor, NSString;

@interface IESECListKitStyleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *marginLeft;
@property (retain, nonatomic) NSNumber *marginRight;
@property (retain, nonatomic) NSNumber *marginTop;
@property (retain, nonatomic) NSNumber *marginBottom;
@property (retain, nonatomic) NSNumber *lineSpacing;
@property (retain, nonatomic) NSNumber *interitemSpacing;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *backgroundColorDarkMode;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (copy, nonatomic) NSString *backgroundImageURLDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColorJSONTransformer;
+ (id)backgroundColorDarkModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
