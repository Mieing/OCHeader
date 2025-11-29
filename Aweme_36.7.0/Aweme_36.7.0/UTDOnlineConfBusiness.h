@class NSString;

@interface UTDOnlineConfBusiness : NSObject <UTDOnlineConfDelegate> {
    id mConfManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPreLoad:(id)a0 confContent:(id)a1;
- (void)onArrived:(id)a0 confContent:(id)a1;
- (void)onNoConfArrived:(id)a0;
- (void)setMConfManager:(id)a0;
- (id)requiredConfNameList;
- (id)requiredConfName;
- (void).cxx_destruct;
- (void)onFail:(id)a0;

@end
