@class NSString, NSMutableDictionary, AWEDCFeedPageContext;

@interface AWEMVCardResourceCache : NSObject <AWEMVCardResourceCacheProtocol>

@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)dequeueReusableRightTopViewResourceClass;
- (Class)dequeueReusableRightBottomLabelResourceClass;
- (Class)dequeueReusableIconLabelResourceClass;
- (id)dequeueReusableIconLabelResourceWithModel:(id)a0;
- (id)dequeueReusableRightBottomLabelResourceWithModel:(id)a0;
- (id)dequeueReusableRightTopViewResourceWithModel:(id)a0;
- (void)setupCache;
- (id)dequeueReusableResourceViewWithClass:(id)a0 Model:(id)a1;
- (id)dequeueReusableCloseButtonResourceWithModel:(id)a0;
- (id)dequeueReusableRightTopIconResourceWithModel:(id)a0;
- (Class)dequeueReusableCloseButtonResourceClass;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
