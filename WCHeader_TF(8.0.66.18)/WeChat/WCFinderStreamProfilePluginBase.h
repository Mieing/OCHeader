@class NSString, WCFinderStreamProfileHeadData;
@protocol WCFinderStreamProfilePluginDelegate;

@interface WCFinderStreamProfilePluginBase : NSObject <WCFinderStreamProfilePlugin>

@property (weak, nonatomic) id<WCFinderStreamProfilePluginDelegate> pluginDelegate;
@property (retain, nonatomic) WCFinderStreamProfileHeadData *headData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)pluginEnable:(id)a0;

- (void)doLoadCache;
- (void)requestPageData;
- (void)updateOverviewSection:(long long)a0 necessary:(BOOL)a1 block:(id /* block */)a2;
- (void)onFetchDataFinish:(BOOL)a0 cgiProfile:(id)a1;
- (void).cxx_destruct;

@end
