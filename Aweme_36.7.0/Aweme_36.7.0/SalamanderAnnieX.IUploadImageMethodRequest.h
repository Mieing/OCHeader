@class NSString, NSMutableDictionary, NSMutableArray;

@interface SalamanderAnnieX.IUploadImageMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_url;
    void /* unknown type, empty encoding */ __rts_filePath;
}

@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, retain) NSMutableDictionary *params;
@property (nonatomic, retain) NSMutableDictionary *header;
@property (nonatomic, retain) NSMutableArray *formDataBody;

- (id)init:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
