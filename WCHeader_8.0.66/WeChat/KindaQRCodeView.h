@class NSString, QBarCodeView;

@interface KindaQRCodeView : KindaView <MMKQRCodeView> {
    QBarCodeView *contentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
