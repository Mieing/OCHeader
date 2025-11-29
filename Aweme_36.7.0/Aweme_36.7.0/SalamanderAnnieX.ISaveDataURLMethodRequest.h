@class NSString;

@interface SalamanderAnnieX.ISaveDataURLMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_dataURL;
    void /* unknown type, empty encoding */ __rts_filename;
    void /* unknown type, empty encoding */ __rts__extension;
    void /* function */ saveToAlbum;
    void /* unknown type, empty encoding */ isCached;
    void /* function */ saveToDir;
}

@property (nonatomic, copy) NSString *dataURL;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *_extension;
@property (nonatomic, copy) NSString *saveToAlbum;
@property (nonatomic, copy) NSString *saveToDir;

- (void).cxx_destruct;
- (id)init;

@end
