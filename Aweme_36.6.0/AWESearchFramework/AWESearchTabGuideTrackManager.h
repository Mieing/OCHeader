@class NSDictionary, NSMutableArray, AWESearchTabGuideResponse;

@interface AWESearchTabGuideTrackManager : NSObject

@property (retain, nonatomic) NSMutableArray *trackCache;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) BOOL isReady;
@property (weak, nonatomic) AWESearchTabGuideResponse *tabGuideResponse;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)hideTypeDesWithHideType:(long long)a0;
+ (id)failTypeDesWithFailType:(long long)a0;
+ (id)guideTypeWithGuide:(id)a0;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateCommonParams:(id)a0;
- (void)sendEventIfReady:(id)a0 params:(id)a1;
- (void)sendCachedTrack;
- (void)handleGuideHide:(id)a0 hideType:(long long)a1;
- (void)handleGuideReveice:(id)a0 isAsync:(BOOL)a1;
- (void)handleGuideShowFail:(id)a0 failType:(long long)a1;
- (void)handleGuideShow:(id)a0;
- (void)handleGuideClick:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
