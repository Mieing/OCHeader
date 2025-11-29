@class NSMutableDictionary, YYMemoryCache;

@interface IESECSliceXPreRenderManager : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;
@property (retain, nonatomic) NSMutableDictionary *preCreateViewsConfigByBiz;
@property (retain, nonatomic) NSMutableDictionary *preBindMockDataConfigByBiz;

+ (id)shared;

- (id)init_private;
- (id)fetchPreCreatedViewWithURL:(id)a0 resourceMetaData:(id)a1 sliceXInstance:(id)a2;
- (id)asyncPreCreateViewsAndBindMockDataWithSliceXInstance:(id)a0 onMainThread:(BOOL)a1;
- (void)updatePreCreateViewsConfig:(id)a0 preBindMockDataConfig:(id)a1 bizCode:(id)a2;
- (BOOL)enablePreCreateViewWithBizCode:(id)a0;
- (BOOL)enablePreBindMockDataWithBizCode:(id)a0;
- (void).cxx_destruct;

@end
