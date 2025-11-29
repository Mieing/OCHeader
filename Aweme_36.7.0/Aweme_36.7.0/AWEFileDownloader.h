@class NSString, AWEProgressLoadingView;
@protocol AWEMediaDownloadLoadingViewProtocol;

@interface AWEFileDownloader : NSObject

@property (copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *subDirectory;
@property (copy, nonatomic) NSString *downloadLoadingTitle;
@property (retain, nonatomic) AWEProgressLoadingView<AWEMediaDownloadLoadingViewProtocol> *downloadLoadingView;

+ (BOOL)p_createDirectoryAtDocumentsPath:(id)a0 subDirectory:(id)a1;
+ (id)p_avoidSamePath:(id)a0;

- (void)updateWithDirectory:(id)a0 subDirectory:(id)a1 downloadLoadingTitle:(id)a2;
- (void)downloadFileWithUrl:(id)a0 host:(id)a1 params:(id)a2 fileExtension:(id)a3 showProcess:(BOOL)a4 showToast:(BOOL)a5 completion:(id /* block */)a6;
- (void)downloadFileWithUrl:(id)a0 params:(id)a1 fileExtension:(id)a2 showProcess:(BOOL)a3 showToast:(BOOL)a4 completion:(id /* block */)a5;
- (id)p_targetDirectory;
- (void)downloadFileWithUrl:(id)a0 andFileName:(id)a1 headerField:(id)a2 fileExtension:(id)a3 showProcess:(BOOL)a4 showToast:(BOOL)a5 completion:(id /* block */)a6;
- (void)downloadFileWithUrl:(id)a0 params:(id)a1 fileExtension:(id)a2 completion:(id /* block */)a3;
- (void)downloadFileWithUrl:(id)a0 andFileName:(id)a1 headerField:(id)a2 fileExtension:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
