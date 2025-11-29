@class NSString, NSMutableArray;

@interface SalamanderAnnieX.ChooseMediaTempFileModel : NSObject {
    void /* unknown type, empty encoding */ size;
    void /* function */ mediaType;
    void /* function */ mimeType;
    void /* function */ base64Data;
    void /* function */ path;
    void /* function */ tempFilePath;
    void /* function */ url;
}

@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *base64Data;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, retain) NSMutableArray *binaryData;
@property (nonatomic, copy) NSString *tempFilePath;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)init;

@end
