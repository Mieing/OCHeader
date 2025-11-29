@interface AWEIMGroupImpl.MangoShareObject : NSObject <IESIMContactPickerControllerDelegate, IESIMMangoTokenShareViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ pickerViewController;
    void /* unknown type, empty encoding */ displayingCellModels;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ redPacketFilterConfig;
    void /* unknown type, empty encoding */ selectActionRecorder;
    void /* unknown type, empty encoding */ subscriber;
    void /* unknown type, empty encoding */ mangoSharePanelOpt;
    void /* unknown type, empty encoding */ $__lazy_storage_$_multiSelectStyle;
}

- (void)contactPickerControllerDidShowViewController:(id)a0;
- (void)contactPickerControllerDidDismissViewController:(id)a0;
- (id)extraTrackInfoWithTokenShareView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
