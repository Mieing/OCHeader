@class NSString;
@protocol AWEStickerPickerEffectUIConfigurationProtocol, AWEStickerPickerCategoryUIConfigurationProtocol;

@interface AWEStickerPickerDefaultUIConfiguration : NSObject <AWEStickerPickerUIConfigurationProtocol>

@property (retain, nonatomic) id<AWEStickerPickerCategoryUIConfigurationProtocol> categoryUIConfig;
@property (retain, nonatomic) id<AWEStickerPickerEffectUIConfigurationProtocol> effectUIConfig;
@property (copy, nonatomic) id /* block */ categoryReloadHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelLoadingView;
- (id)panelErrorView;
- (BOOL)supportSearchSuggestWords;
- (id)initWithCategoryUIConfig:(id)a0 effectUIConfig:(id)a1;
- (void).cxx_destruct;

@end
