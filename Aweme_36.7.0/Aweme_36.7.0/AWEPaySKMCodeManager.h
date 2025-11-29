@class NSMutableDictionary, NSString, UIImage, NSMutableArray;

@interface AWEPaySKMCodeManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *localCodeDict;
@property (nonatomic) BOOL isDrawCodeImageFetching;
@property (retain, nonatomic) NSMutableArray *drawFetchCallbacks;
@property (copy, nonatomic) id /* block */ saveDownloadCodeDrawImageCompletion;
@property (retain, nonatomic) UIImage *downloadNormalCodeImage;
@property (retain, nonatomic) UIImage *downloadAmountCodeImage;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *currentAmount;
@property (copy, nonatomic) NSString *currentTips;
@property (retain, nonatomic) UIImage *userIconImage;
@property (nonatomic) BOOL isAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)saveDownloadCodeDrawImageToAlbumCompletion:(id /* block */)a0 albumCert:(id)a1 goSettingsCert:(id)a2;
- (void)fetchDownloadCodeDrawImageCompletion:(id /* block */)a0;
- (void)fetchQRCodeStringWithAmount:(id)a0 tips:(id)a1 useCache:(BOOL)a2 verifyId:(id)a3 codeType:(unsigned long long)a4 isPreApply:(BOOL)a5 completion:(id /* block */)a6;
- (id)getLocalCodeWithUserModel:(id)a0 codeType:(unsigned long long)a1;
- (void)saveToLocal:(id)a0 userModel:(id)a1 codeType:(unsigned long long)a2;
- (void)didComeback;
- (void)cleanLocalCache:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)getCodeKey:(unsigned long long)a0;
- (void)fetchQRCodeStringWithAmount:(id)a0 tips:(id)a1 codeType:(unsigned long long)a2 isPreApply:(BOOL)a3 completion:(id /* block */)a4;
- (void)checkCodeValid:(id)a0 extraParams:(id)a1 autoClean:(BOOL)a2 codeType:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)reset;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
