@class UIColor, NSString;

@interface AWESearchDiscussTabCardColorThemeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tabColor;
@property (retain, nonatomic) UIColor *selectedTabColor;
@property (retain, nonatomic) UIColor *fontColor;
@property (retain, nonatomic) UIColor *selectedFontColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColorJSONTransformer;
+ (id)tabColorJSONTransformer;
+ (id)selectedTabColorJSONTransformer;
+ (id)fontColorJSONTransformer;
+ (id)selectedFontColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
