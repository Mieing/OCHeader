@class NSString;

@interface PayLiteAppUtil : NSObject <MMLiteAppExt>

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)checkAndPreloadLiteApp:(id)a0 page:(id)a1;
- (void)onLiteAppUpdateFinish:(unsigned long long)a0 appId:(id)a1 appInfo:(id)a2;
- (void).cxx_destruct;

@end
