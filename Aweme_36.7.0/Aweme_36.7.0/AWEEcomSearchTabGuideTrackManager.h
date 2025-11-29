@class NSDictionary, NSMutableArray;

@interface AWEEcomSearchTabGuideTrackManager : NSObject

@property (retain, nonatomic) NSMutableArray *trackCache;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) BOOL isReady;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateCommonParams:(id)a0;
- (void)sendEventIfReady:(id)a0 params:(id)a1;
- (void)sendCachedTrack;
- (void)trackGuideHide:(id)a0 hideType:(long long)a1;
- (void)trackGuideReceive:(id)a0;
- (void)trackGuideShowFail:(id)a0 failType:(long long)a1;
- (void)trackGuideShow:(id)a0;
- (void)trackGuideClick:(id)a0 extraParams:(id)a1;
- (void)trackGuide:(id)a0 event:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
