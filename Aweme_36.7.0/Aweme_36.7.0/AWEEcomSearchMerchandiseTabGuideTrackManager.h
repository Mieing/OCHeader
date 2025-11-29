@class NSDictionary, NSMutableArray;

@interface AWEEcomSearchMerchandiseTabGuideTrackManager : NSObject

@property (retain, nonatomic) NSMutableArray *trackCache;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) BOOL isReady;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateCommonParams:(id)a0;
- (void)trackGuideShowWithFailType:(long long)a0 extraParams:(id)a1;
- (void)trackGuideShowWithExtraParams:(id)a0;
- (void)trackGuideClickWithExtraParams:(id)a0;
- (void)trackGuideEvent:(id)a0 extraParams:(id)a1;
- (void)sendEventIfReady:(id)a0 params:(id)a1;
- (void)sendCachedTrack;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
