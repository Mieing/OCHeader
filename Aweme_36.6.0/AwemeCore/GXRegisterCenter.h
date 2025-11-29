@class NSArray, NSMutableDictionary, GXTemplateSource;
@protocol GXTemplateSourceProtocal;

@interface GXRegisterCenter : NSObject {
    BOOL _isNeedSort;
    NSArray *_resultSources;
    NSMutableDictionary *_kvSources;
    GXTemplateSource *_defaultTemplateSource;
}

@property (retain, nonatomic) Class imageViewClass;
@property (readonly, nonatomic) Class lottieViewClass;
@property (retain, nonatomic) Class bizServiceImpl;
@property (readonly, nonatomic) id<GXTemplateSourceProtocal> defaultTemplateSource;
@property (readonly, nonatomic) NSArray<GXTemplateSourceProtocal> *templateSources;

+ (id)defaultCenter;

- (id)sortByPriority;
- (void)registerLottieViewClass:(Class)a0;
- (void)registerClass:(Class)a0 forNodeType:(unsigned long long)a1;
- (void)registerBizServiceImpl:(Class)a0;
- (void)unregisterTemplateSource:(id)a0;
- (BOOL)registerTemplateServiceWithBizId:(id)a0 templateBundlePath:(id)a1;
- (BOOL)unRegisterTemplateServiceWithBizId:(id)a0;
- (id)loadTemplateBundlePathForBizId:(id)a0;
- (void)registerTemplateSource:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
