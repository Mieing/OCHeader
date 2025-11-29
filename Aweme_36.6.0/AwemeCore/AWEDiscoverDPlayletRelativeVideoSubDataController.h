@class NSString, NSNumber, NSMutableDictionary;
@protocol AWEDiscoverDPlayletRelativeVideoSubDataDelegate;

@interface AWEDiscoverDPlayletRelativeVideoSubDataController : AWEListDataController

@property (copy, nonatomic) NSString *seriesId;
@property (retain, nonatomic) NSNumber *tagId;
@property (weak, nonatomic) id<AWEDiscoverDPlayletRelativeVideoSubDataDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *lynxGetAwemeListCallBackDict;
@property (retain, nonatomic) NSMutableDictionary *awemeModelCaches;

- (void)traceLogWithName:(id)a0 params:(id)a1 awemeModel:(id)a2;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)requestRelativePlayletVideoList:(id)a0 cursor:(id)a1 tag:(id)a2 pullDown:(BOOL)a3 completeBlock:(id /* block */)a4;
- (void)relativeRequestTraceLogWithParams:(id)a0 withError:(id)a1 apiModel:(id)a2 traceName:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
