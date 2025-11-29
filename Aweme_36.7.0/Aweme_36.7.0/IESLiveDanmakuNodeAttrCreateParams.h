@class HTSLiveText, NSString, HTSLiveTemplateEngineConfiguration, UIFont, UIColor;
@protocol HTSLiveTemplateProviderAdapter;

@interface IESLiveDanmakuNodeAttrCreateParams : NSObject

@property (retain, nonatomic) HTSLiveTemplateEngineConfiguration *config;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (copy, nonatomic) NSString *defaultContent;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;

- (void).cxx_destruct;

@end
