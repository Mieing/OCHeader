@class DitoPageContext, NSMutableDictionary, NSDictionary, NSString;
@protocol DitoExtensionContainerProtocol;

@interface DitoPresetHeightLynxExtension : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) NSMutableDictionary *pagePresetHeightDictionary;
@property (retain, nonatomic) NSMutableDictionary *pagePresetHeightDateDictionary;
@property (copy, nonatomic) NSDictionary *paramDictionary;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)didLoadPageModel:(id)a0;
- (id)cacheEnableNodeListWithPageModel:(id)a0;
- (BOOL)enableUsePresetHeightWithNode:(id)a0;
- (id)getCacheKeyWithModel:(id)a0;
- (BOOL)timeIntervalGreaterThanSevenDaysSinceDate:(id)a0;
- (void)clearPresetHeightCache;
- (void).cxx_destruct;
- (void)viewWillDisappear;

@end
