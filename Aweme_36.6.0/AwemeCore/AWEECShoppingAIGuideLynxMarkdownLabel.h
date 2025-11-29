@class AWEECShoppingAIGuideGrowingLabel, NSString, UIColor, AWEECShoppingAIGuideLynxMarkdownBundle;

@interface AWEECShoppingAIGuideLynxMarkdownLabel : LynxUI <AWEECShoppingAIGuideGrowingLabelDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideGrowingLabel *markdownLabel;
@property (retain, nonatomic) NSString *ec_fontColorStr;
@property (retain, nonatomic) UIColor *ec_fontColor;
@property (nonatomic) unsigned long long ec_fontSize;
@property (nonatomic) unsigned long long ec_fontWeight;
@property (retain, nonatomic) AWEECShoppingAIGuideLynxMarkdownBundle *bundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)updateMarkdownLabel:(id)a0 bundle:(id)a1;

@end
