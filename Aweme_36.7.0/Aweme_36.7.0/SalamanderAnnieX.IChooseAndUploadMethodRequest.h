@class NSString, NSMutableDictionary, _TtC16SalamanderAnnieX27IChooseAndUploadVideoParams, _TtC16SalamanderAnnieX27IChooseAndUploadImageParams, NSMutableArray;

@interface SalamanderAnnieX.IChooseAndUploadMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_maxCount;
    void /* unknown type, empty encoding */ __rts_needBase64Data;
    void /* unknown type, empty encoding */ __rts_saveToPhotoAlbum;
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_needCommonParams;
    void /* unknown type, empty encoding */ __rts_sourceType;
    void /* function */ cameraType;
    void /* unknown type, empty encoding */ __rts_mediaType;
    void /* unknown type, empty encoding */ shouldUploadRawFile;
    void /* unknown type, empty encoding */ timeoutInterval;
}

@property (nonatomic) double maxCount;
@property (nonatomic) BOOL needBase64Data;
@property (nonatomic) BOOL saveToPhotoAlbum;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) NSMutableDictionary *params;
@property (nonatomic, retain) NSMutableDictionary *header;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic, retain) _TtC16SalamanderAnnieX27IChooseAndUploadImageParams *imageParams;
@property (nonatomic, retain) _TtC16SalamanderAnnieX27IChooseAndUploadVideoParams *videoParams;
@property (nonatomic, copy) NSString *sourceType;
@property (nonatomic, copy) NSString *cameraType;
@property (nonatomic, retain) NSMutableArray *mediaType;

- (void).cxx_destruct;
- (id)init;

@end
