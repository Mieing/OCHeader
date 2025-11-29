@class NSMutableDictionary;

@interface AWEStudioComposerEffectLoadingTimestampManager : NSObject {
    NSMutableDictionary *m_params;
}

- (void)trigger:(long long)a0;
- (long long)effectLoadTime;
- (BOOL)didApply;
- (void).cxx_destruct;
- (id)init;
- (id)timestamps;

@end
