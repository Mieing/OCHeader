@class NSDictionary, BDXContext, NSString;

@interface AnnieLiveBizSchema : NSObject <BDSchemaInterceptorProtocol>

@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) BDXContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertLiveSchemaToAnnie:(id)a0;
+ (void)handleContextWithSchemaDataV2:(id)a0 context:(id)a1;
+ (id)addSchemaParamsToAnnie:(id)a0;
+ (id)convertSchemaParamsToAnnie:(id)a0;
+ (BOOL)disableUseForest:(id)a0;
+ (BOOL)enableDefaultForestPreload;

- (BOOL)isLightModeForPageWithSchemaParam:(id)a0;
- (long long)modeForPageWithSchemaParam:(id)a0;
- (BOOL)isPadAdaptionMode:(id)a0;
- (BOOL)isUrlInLightAdapterAllowList:(id)a0;
- (BOOL)shouldUseLandscapeSize;
- (BOOL)isIpadPortraitMode;
- (BOOL)hasRightOrBottomMargin;
- (BOOL)isBottomPopup;
- (double)upStatusBarHeight;
- (double)homeIndicatorHeight:(id)a0;
- (BOOL)isLightModeForPopup;
- (double)parseWidth;
- (double)parseHeight:(id)a0;
- (BOOL)isPadAdaptionMode;
- (void).cxx_destruct;
- (double)defaultHeight;
- (id)errorMessage;
- (BOOL)isLandscape;
- (double)defaultWidth;
- (BOOL)convert:(id)a0;

@end
