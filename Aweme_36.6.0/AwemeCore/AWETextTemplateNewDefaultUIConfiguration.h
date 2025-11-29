@class UIColor, NSString;
@protocol AWETextTemplateStickerUIConfigurationProtocol, AWETextTemplateCategoryUIConfigurationProtocol;

@interface AWETextTemplateNewDefaultUIConfiguration : NSObject <AWETextTemplateUIConfigurationProtocol>

@property (retain, nonatomic) id<AWETextTemplateCategoryUIConfigurationProtocol> categoryUIConfig;
@property (retain, nonatomic) id<AWETextTemplateStickerUIConfigurationProtocol> effectUIConfig;
@property (copy, nonatomic) id /* block */ categoryReloadHanlder;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
