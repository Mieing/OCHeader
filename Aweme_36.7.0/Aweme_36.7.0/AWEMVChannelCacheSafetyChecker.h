@class AWEMVChannelPageContext;
@protocol AWEFeedSafetyCheckProtocol;

@interface AWEMVChannelCacheSafetyChecker : NSObject

@property (class, readonly, nonatomic) AWEMVChannelCacheSafetyChecker *shared;

@property (retain, nonatomic) id<AWEFeedSafetyCheckProtocol> safetyCheckHandler;
@property (nonatomic) BOOL cacheIsSafety;
@property (nonatomic) long long cacheUnsafetyFirstIndex;
@property (weak, nonatomic) AWEMVChannelPageContext *context;

- (void)findUnsafeIndex:(id)a0 awemeList:(id)a1 isCurrentModel:(BOOL)a2;
- (void)checkVideoSafety:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
