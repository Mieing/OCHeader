@class NSString, QBarCodeView;

@interface KindaBarCodeView : KindaView <MMKBarCodeView> {
    QBarCodeView *contentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
