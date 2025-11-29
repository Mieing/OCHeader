@interface AWEAdComponentFeedReverseFreshManager : HTSService <AWEAdComponentFeedReverseFreshManager> {
    void /* unknown type, empty encoding */ reverseFreshShowSeconds;
    void /* unknown type, empty encoding */ unableShowButtonSeconds;
    void /* unknown type, empty encoding */ unableShowComponentID;
    void /* unknown type, empty encoding */ showButtonSecondString;
    void /* unknown type, empty encoding */ showButtonColorSecondString;
    void /* unknown type, empty encoding */ switchStyleSecondString;
    void /* unknown type, empty encoding */ showSecondsString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adReverseFreshEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adMannorReverseFreshEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adLandingPageReverseFreshEnable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reverseFreshModels;
    void /* unknown type, empty encoding */ playingModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_webPageRepeatlyModels;
}

- (void)feedVideoStartPlay:(id)a0;
- (BOOL)isFeedReverseFreshAd:(id)a0;
- (void)quickSlidesUpdateAdCompontShowInfo:(id)a0 seconds:(long long)a1;
- (BOOL)isReverseFreshAdModel:(id)a0;
- (void)recordWebPageModelShow:(id)a0;
- (BOOL)isOpenWebPageRepeatly:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
