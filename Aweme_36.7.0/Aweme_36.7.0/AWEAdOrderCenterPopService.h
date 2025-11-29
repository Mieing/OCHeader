@interface AWEAdOrderCenterPopService : HTSService <AWEAdOrderCenterPopService> {
    void /* unknown type, empty encoding */ landingType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timestampDic;
    void /* unknown type, empty encoding */ $__lazy_storage_$_clickDoneDic;
}

@property (nonatomic) BOOL openOtherAppDone;

- (void)showOrderCenterVCWithModel:(id)a0;
- (BOOL)orderCenterEnable;
- (void).cxx_destruct;
- (id)init;

@end
