@class _TtC16SalamanderAnnieX22ChooseMediaVideoParams, NSString, NSMutableArray, _TtC16SalamanderAnnieX22ChooseMediaImageParams;

@interface SalamanderAnnieX.IChooseMediaMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_sourceType;
    void /* function */ cameraType;
    void /* unknown type, empty encoding */ saveToPhotoAlbum;
    void /* unknown type, empty encoding */ maxCount;
    void /* unknown type, empty encoding */ needBase64Data;
    void /* unknown type, empty encoding */ isNeedCut;
    void /* unknown type, empty encoding */ cropRatioWidth;
    void /* unknown type, empty encoding */ cropRatioHeight;
    void /* unknown type, empty encoding */ needBinaryData;
    void /* unknown type, empty encoding */ compressImage;
    void /* unknown type, empty encoding */ compressWidth;
    void /* unknown type, empty encoding */ compressHeight;
    void /* unknown type, empty encoding */ ignoreUserCancel;
    void /* unknown type, empty encoding */ fixUserCancel;
    void /* unknown type, empty encoding */ copyToPrivateDirection;
}

@property (nonatomic, copy) NSString *sourceType;
@property (nonatomic, copy) NSString *cameraType;
@property (nonatomic, retain) NSMutableArray *mediaType;
@property (nonatomic, retain) _TtC16SalamanderAnnieX22ChooseMediaImageParams *imageParams;
@property (nonatomic, retain) _TtC16SalamanderAnnieX22ChooseMediaVideoParams *videoParams;
@property (nonatomic, retain) NSMutableArray *mediaTypes;

- (void).cxx_destruct;
- (id)init;

@end
