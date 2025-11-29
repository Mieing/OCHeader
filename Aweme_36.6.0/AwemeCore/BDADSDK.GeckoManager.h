@class NSString, _TtC7BDADSDK12GeckoManager;

@interface BDADSDK.GeckoManager : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_doOnce;
}

@property (class, nonatomic, readonly) _TtC7BDADSDK12GeckoManager *shared;
@property (class, nonatomic, readonly) NSString *GurdKitDidRegisterACNotification;
@property (class, nonatomic, readonly) NSString *LocalGeckoAccessKey;
@property (class, nonatomic, readonly) NSString *OnlineGeckoAccessKey;

- (void)gurdKitDidSetup;
- (void)registerAndPreloadCommerceGecko;
- (void)updateGurdPollWith:(id)a0;
- (void)updateGurdPollWith:(id)a0 completion:(id /* block */)a1;
- (id)dataFor:(id)a0 channel:(id)a1;
- (BOOL)hasGeckoResourceFor:(id)a0;
- (void)clearGeckoResourceFor:(id)a0;
- (id)geckoAccessKey;
- (void).cxx_destruct;
- (id)init;

@end
