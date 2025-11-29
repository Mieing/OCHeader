@class NSData, NSMutableDictionary;
@protocol LynxDynamicComponentFetcher, LynxTemplateProvider, LynxImageFetcher, LynxResourceFetcher;

@interface PuzzleContextExtraModel : NSObject

@property (retain, nonatomic) NSData *templateData;
@property (nonatomic) BOOL disableJSRuntime;
@property (retain, nonatomic) Class moduleClass;
@property (weak, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (retain, nonatomic) NSMutableDictionary *customElement;
@property (retain, nonatomic) NSMutableDictionary *customShadowNode;

- (void).cxx_destruct;

@end
