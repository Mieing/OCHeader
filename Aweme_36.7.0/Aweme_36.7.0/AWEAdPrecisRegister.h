@interface AWEAdPrecisRegister : HTSService <AWEAdPrecisRegister> {
    void /* unknown type, empty encoding */ cepMap;
}

- (void)onServiceInit;
- (void)feedWillDisplayCellWithAweme:(id)a0;
- (void)feedDidEndDisplayingCellWithAweme:(id)a0;
- (id)adPrecisStatusForEvent:(id)a0 withAweme:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
