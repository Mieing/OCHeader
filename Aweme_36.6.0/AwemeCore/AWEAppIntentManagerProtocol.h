@interface AWEAppIntentManagerProtocol : NSObject <AWEAppIntentManagerProtocol> {
    void /* unknown type, empty encoding */ _openPageEntities;
    void /* unknown type, empty encoding */ _cachedRawData;
    void /* unknown type, empty encoding */ _cachedSettingsData;
    void /* unknown type, empty encoding */ _currentStrategy;
    void /* unknown type, empty encoding */ _lastInjectedDataHash;
    void /* unknown type, empty encoding */ _hasPerformedUpdate;
    void /* unknown type, empty encoding */ _isLoadingImages;
}

+ (id)shared;

- (void)updateAppShortcut:(long long)a0;
- (void)injectIntentConfig:(id)a0 optimizeStrategy:(unsigned long long)a1 topHitSettings:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)perform:(id)a0;

@end
