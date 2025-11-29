@class NSString, NSMapTable, BDPMultiDelegateProxy;
@protocol BDPShareBusinessHandler_HG;

@interface BDPShareBusinessUtilsHg : NSObject <BDPWarmBootMessage, BDPAppRouteChangeMessage>

@property (retain) NSMapTable *webURLShareParams;
@property (retain) BDPMultiDelegateProxy<BDPShareBusinessHandler_HG> *defaultHandlers;
@property (retain) NSMapTable *channelHandlers;
@property (copy, nonatomic) id /* block */ isBottomBarShowBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildSharePrepareModelWithUniqueID:(id)a0 params:(id)a1;
+ (void)bootstrapLaunch;
+ (id)buildSharePanelTrackWithUniqueID:(id)a0 extra:(id)a1;
+ (void)registerShareBusinessHandler:(id)a0 forChannel:(id)a1;
+ (void)startShareWithUniqueID:(id)a0 channel:(id)a1;
+ (void)registerShareBusinessHandler:(id)a0;
+ (void)dispatchShareBusinessForChannel:(id)a0 withParams:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
+ (BOOL)isBottomBarShow;
+ (void)setIsBottomBarShowBlk:(id /* block */)a0;
+ (id)generateSchemaWithSchema:(id)a0 params:(id)a1;
+ (void)startShareWithUniqueID:(id)a0 from:(id)a1 target:(id)a2 channel:(id)a3;
+ (id)generateIconShareImage:(struct CGSize { double x0; double x1; })a0 iconImage:(id)a1 themeColor:(id)a2;
+ (BOOL)isIMShareChannel:(id)a0;
+ (id)sharedInstance;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
