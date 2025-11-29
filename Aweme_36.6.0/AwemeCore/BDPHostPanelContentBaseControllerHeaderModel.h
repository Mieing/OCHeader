@class NSString;

@interface BDPHostPanelContentBaseControllerHeaderModel : BDPBasePluginModel

@property (readonly, nonatomic) BOOL isLottie;
@property (readonly, copy, nonatomic) NSString *lottieFolderName;
@property (readonly, copy, nonatomic) NSString *lottieJsonSubPath;
@property (copy, nonatomic) NSString *lottieFilePath;
@property (readonly, copy, nonatomic) NSString *lottieWebUrl;
@property (readonly, nonatomic) BOOL isImg;
@property (readonly, copy, nonatomic) NSString *imgWebUrl;
@property (readonly, nonatomic) double imgHeightPerWidthRadio;

- (id)initWithImgWebUrl:(id)a0 heightPerWidthRadio:(double)a1;
- (id)initWithLottieFolderName:(id)a0 jsonSubPath:(id)a1 webUrl:(id)a2;
- (id)initWithLottieFilePath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
