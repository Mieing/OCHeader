@class NSString, _TtC16SalamanderAnnieX36UploadImagesToImageXEncryptionConfig, _TtC16SalamanderAnnieX32UploadImagesToImageXUploadConfig, _TtC16SalamanderAnnieX30UploadImagesToImageXAuthConfig, NSMutableArray;

@interface SalamanderAnnieX.IUploadImagesToImageXMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_authConfig;
    void /* unknown type, empty encoding */ __rts_uploadConfig;
    void /* unknown type, empty encoding */ __rts_filePaths;
    void /* unknown type, empty encoding */ __rts_encryptionConfig;
    void /* unknown type, empty encoding */ __rts_mainNetworkType;
}

@property (nonatomic, retain) _TtC16SalamanderAnnieX30UploadImagesToImageXAuthConfig *authConfig;
@property (nonatomic, retain) _TtC16SalamanderAnnieX32UploadImagesToImageXUploadConfig *uploadConfig;
@property (nonatomic, retain) NSMutableArray *filePaths;
@property (nonatomic, retain) _TtC16SalamanderAnnieX36UploadImagesToImageXEncryptionConfig *encryptionConfig;
@property (nonatomic, copy) NSString *mainNetworkType;

- (id)init:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
