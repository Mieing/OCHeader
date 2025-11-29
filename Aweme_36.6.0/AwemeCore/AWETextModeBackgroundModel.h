@class NSArray, NSString, AWEStoryColor, AWEStoryFontModel, AWEURLModel;

@interface AWETextModeBackgroundModel : AWEBaseApiModel <ACCTextModeBackgroundModelProtocol>

@property (nonatomic) BOOL isColorBackground;
@property (readonly, copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) AWEURLModel *backgroundImage;
@property (readonly, nonatomic) AWEStoryColor *fontColor;
@property (readonly, nonatomic) AWEStoryFontModel *font;
@property (readonly, nonatomic) AWEStoryColor *hintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isColorBackground;
@property (copy, nonatomic) NSArray *colorsString;
@property (copy, nonatomic) AWEURLModel *backgroundImage;
@property (copy, nonatomic) NSString *fontColorString;
@property (copy, nonatomic) NSString *fontNameString;
@property (copy, nonatomic) NSString *hintColorString;
@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) AWEStoryColor *fontColor;
@property (readonly, nonatomic) AWEStoryFontModel *font;
@property (readonly, nonatomic) AWEStoryColor *hintColor;

+ (id)backgroundImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)CGColors;
- (void).cxx_destruct;
- (id)colorString;

@end
