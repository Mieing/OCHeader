@class NSString, NSMutableDictionary;

@interface SalamanderAnnieX.IDownloadFileMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_url;
    void /* function */ _extension;
    void /* unknown type, empty encoding */ needCommonParams;
    void /* function */ saveToAlbum;
    void /* unknown type, empty encoding */ enableProgress;
}

@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *_extension;
@property (nonatomic, retain) NSMutableDictionary *header;
@property (nonatomic, retain) NSMutableDictionary *params;
@property (nonatomic, copy) NSString *saveToAlbum;

- (void).cxx_destruct;
- (id)init;

@end
