@class WNSaveImageCgi, NSArray, NSString;

@interface WNSaveImageResourceMgr : MMUserService <WNSaveImageCgiExt, MMServiceProtocol>

@property (retain, nonatomic) WNSaveImageCgi *resourceCgi;
@property (retain, nonatomic) NSArray *arrFontInfos;
@property (retain, nonatomic) NSArray *arrBkgImageInfos;
@property (nonatomic) BOOL bDownload;
@property (nonatomic) unsigned int localId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startDownloadResources:(unsigned int)a0;
- (id)getWNFontInfoArr;
- (id)getWNBkgImageInfoArr;
- (void)onDownloadSuccess;
- (void)onDownloadFail;
- (void)onDownloadNone;
- (void)handleNetworkResource;
- (id)wnFontOfSize:(double)a0 fileName:(id)a1 andFamilyName:(id)a2 andZipFile:(id)a3;
- (void)loadFontWithFileName:(id)a0 andZipFile:(id)a1;
- (void).cxx_destruct;

@end
