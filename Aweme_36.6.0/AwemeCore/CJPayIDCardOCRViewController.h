@class CJPayIDCardOCRResponse, NSString, UIImageView, NSMutableDictionary, UILabel, NSDictionary;

@interface CJPayIDCardOCRViewController : CJPayCardOCRViewController

@property (retain, nonatomic) UIImageView *profileSideImage;
@property (retain, nonatomic) UIImageView *emblemSideImage;
@property (retain, nonatomic) UIImageView *profileIcon;
@property (retain, nonatomic) UIImageView *emblemIcon;
@property (nonatomic) unsigned long long scanStatus;
@property (copy, nonatomic) CJPayIDCardOCRResponse *profileSideResponse;
@property (copy, nonatomic) CJPayIDCardOCRResponse *emblemSideResponse;
@property (copy, nonatomic) NSString *isAfterClear;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSMutableDictionary *fxjResponseDict;
@property (nonatomic) unsigned long long compressSize;
@property (nonatomic) unsigned long long idCardType;
@property (copy, nonatomic) NSString *frontRequestUrl;
@property (copy, nonatomic) NSString *backRequestUrl;
@property (copy, nonatomic) NSString *isecKey;
@property (nonatomic) unsigned long long infoStauts;
@property (copy, nonatomic) NSString *idVerifySouce;
@property (copy, nonatomic) NSDictionary *extParams;

- (void)alertTimeOut;
- (void)p_scanWithImage:(id)a0;
- (void)p_trackWithEventName:(id)a0 param:(id)a1;
- (id)p_cropImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)p_isAbUploadOpt;
- (id)p_buildBDPayIDCardOCRRequestParam:(id)a0;
- (void)p_handleResponse:(id)a0 costTime:(double)a1;
- (void)p_handleUI;
- (void)p_handleCallback;
- (void)p_startRequestWithScanStatus:(unsigned long long)a0 bizParam:(id)a1 completion:(id /* block */)a2;
- (void)p_modifyMemberElements;
- (BOOL)p_abtestOp;
- (void)p_clearWrongInfo;
- (void).cxx_destruct;
- (id)init;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)setupUI;

@end
