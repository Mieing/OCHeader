@class NSMutableArray;

@interface WNSaveImageCgi : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *fontInfoList;
@property (retain, nonatomic) NSMutableArray *backGroundInfoList;
@property (retain, nonatomic) NSMutableArray *arrFontInfos;
@property (retain, nonatomic) NSMutableArray *arrBkgImageInfos;
@property (nonatomic) unsigned int curVersion;
@property (nonatomic) unsigned long long fontInfosCount;
@property (nonatomic) unsigned long long imageInfosCount;

- (id)init;
- (void)startRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onReturnError;
- (void)onReturnSuccess;
- (void)onReturnNoNeedDownload;
- (void)handleMessageReturnWithResponse:(id)a0;
- (void)clearCache;
- (void)checkDownLoadQueue;
- (void)downloadFont:(id)a0;
- (void)generateWNBkgImageInfo;
- (id)decodeFontResourcesFromFile;
- (id)decodeBkgImageResourcesFromFile;
- (void)encodeResources:(id)a0 toFilePath:(id)a1;
- (id)getWNFontInfoArr;
- (id)getWNBkgImageInfoArr;
- (void).cxx_destruct;

@end
