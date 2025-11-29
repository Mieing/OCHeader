@class NSString;

@interface WCFinderLiveCoinReporter : NSObject {
    NSString *m_coinSessionId;
}

+ (void)reportCoinDetail:(id)a0;

- (void)reportCoinAction:(unsigned long long)a0 withSceneType:(long long)a1;
- (void).cxx_destruct;

@end
