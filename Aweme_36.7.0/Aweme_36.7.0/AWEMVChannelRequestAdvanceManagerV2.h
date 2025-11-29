@class AWEMVChannelPageContext;

@interface AWEMVChannelRequestAdvanceManagerV2 : NSObject

@property (class, readonly, nonatomic) AWEMVChannelRequestAdvanceManagerV2 *shared;

@property (retain, nonatomic) AWEMVChannelPageContext *pageContext;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (id)aAWEPadBizUIAdapter;
- (void)initialFetch;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)nextLandingFetch;
- (void)initialFetchFromLanding:(BOOL)a0;
- (void)cancelFetchIfNeeded;
- (void)prepareToReusePageContext;
- (void).cxx_destruct;
- (void)cleanup;

@end
