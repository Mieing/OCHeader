@class NSString, HwClientEncryptFileInfo, CMessageWrap;

@interface ILinkDeviceData : NSObject

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSString *encryptedFilePath;
@property (nonatomic) int cdnFileType;
@property (nonatomic) int cdnAppType;
@property (retain, nonatomic) HwClientEncryptFileInfo *clientEncryptInfo;

- (id)initWithMessageWrap:(id)a0;
- (void)setParams;
- (id)getMessageWrap;
- (id)getDeviceMsg;
- (id)musicInfo;
- (id)locationInfo;
- (id)urlInfo;
- (id)fileInfo;
- (id)imageInfo;
- (id)videoInfo;
- (id)getMsgDataPath;
- (BOOL)shouldUploadToCDN;
- (id)getMsgDescription;
- (void).cxx_destruct;

@end
