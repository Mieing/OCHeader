@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWECommerceVideoIntelligentManager : HTSService <AWECommerceVideoIntelligentManager>

@property (retain, nonatomic) NSMutableDictionary *predictResult;
@property (retain, nonatomic) NSMutableArray *preloadedList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)storePredictResultWithModel:(id)a0 result:(id)a1;
- (void)deletePredictResultWithModel:(id)a0;
- (void)triggerCommerceVideoIntelligentPredictWithModel:(id)a0 type:(unsigned long long)a1 predictResult:(id)a2;
- (BOOL)enableCtrExtraClickAreaWithModel:(id)a0;
- (id)getCtrExtraClickAreaPredictConfigWithModel:(id)a0 type:(unsigned long long)a1;
- (BOOL)checkPointIsInsideWith:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 extraArea:(id)a2;
- (void)sendMessageToStrategyWithConfig:(id)a0 type:(unsigned long long)a1 data:(id)a2 itemId:(id)a3 uri:(id)a4;
- (void)increaseFeedAdVideoCacheWhenSlowSlideWithModel:(id)a0 isForce:(BOOL)a1 data:(id)a2 config:(id)a3;
- (void)trackPlaytimePredictWithState:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
