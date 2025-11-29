@class NSString;

@interface AWESearchMiddlePagePreLayoutManager : NSObject <AWESearchMiddlePagePreLayoutProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseAnnieX;
+ (id)userRecommendSearchSwitch;
+ (void)prelayoutForScene:(id)a0 schemaDic:(id)a1 extraParams:(id)a2;
+ (void)prelayoutForScene:(id)a0 searchUrl:(id)a1 extraParams:(id)a2;
+ (void)clearCacheForScene:(id)a0 searchUrl:(id)a1 extraParams:(id)a2;
+ (void)clearCacheForScene:(id)a0 schemaDic:(id)a1 extraParams:(id)a2;
+ (void)p_prelayoutForScene:(id)a0 WithIsFirstTime:(BOOL)a1 sourceParams:(id)a2;
+ (id)searchMiddleLynxConfigWith:(id)a0;
+ (id)searchMiddleLynxRawDataWithConfig:(id)a0;
+ (id)getPrelayoutLynxConfigWith:(id)a0 withModel:(id)a1;
+ (id)searchMiddleHistory:(id)a0 model:(id)a1;
+ (id)getExtraCommonParamsWith:(id)a0;
+ (id)customPrelayoutParamsWith:(id)a0 withModel:(id)a1;
+ (id)feedExtraCommonParamsWith:(id)a0;
+ (id)feedCustomLynxParamsWith:(id)a0 withModel:(id)a1;
+ (void)prelayoutWithIsFirstTime:(BOOL)a0 sourceParams:(id)a1;
+ (void)clearCache;


@end
