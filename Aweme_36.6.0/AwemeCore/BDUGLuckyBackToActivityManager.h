@class NSString, NSMutableDictionary;

@interface BDUGLuckyBackToActivityManager : NSObject <BDUGLuckyBackToActivityProtocol>

@property (retain, nonatomic) NSMutableDictionary *registeredPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)backToActivityPageWithID:(id)a0;
- (BOOL)backToActivityPageWithID:(id)a0 appendEnterFrom:(id)a1;
- (BOOL)backToActivityPageWithID:(id)a0 forceEnterFrom:(id)a1;
- (BOOL)backToActivityPageWithID:(id)a0 enterFromBlock:(id /* block */)a1;
- (void)trackWithPageInfo:(id)a0 errorCode:(int)a1;
- (id)fixUrl:(id)a0 withEnterFromBlock:(id /* block */)a1;
- (BOOL)tryPopToActivityPage:(id)a0;
- (void)registerActivityPage:(id)a0 withID:(id)a1 pageType:(id)a2 backToSchema:(id)a3 rawParams:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
