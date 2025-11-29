@class NSString;

@interface ScanBarcodeMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL _isUploading;
}

@property (retain, nonatomic) NSString *extKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)getBarcodeType:(id)a0;

- (id)init;
- (void)dealloc;
- (unsigned int)sendBarcode:(id)a0 type:(id)a1 mode:(unsigned int)a2 scene:(unsigned int)a3 tabBarInfo:(id)a4 markDotInfo:(id)a5;
- (void)cancelUploading;
- (void)cancelSendBarcode:(unsigned int)a0;
- (id)convertOriImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })covertNormalizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1 height:(double)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
