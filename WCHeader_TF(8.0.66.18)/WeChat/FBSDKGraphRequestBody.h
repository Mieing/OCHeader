@class NSMutableDictionary, NSString, NSData, NSMutableData;

@interface FBSDKGraphRequestBody : NSObject {
    NSMutableData *_data;
    NSMutableDictionary *_json;
    NSString *_stringBoundary;
}

@property (readonly, retain, nonatomic) NSData *data;

- (id)init;
- (id)mimeContentType;
- (void)appendUTF8:(id)a0;
- (void)appendWithKey:(id)a0 formValue:(id)a1 logger:(id)a2;
- (void)appendWithKey:(id)a0 imageValue:(id)a1 logger:(id)a2;
- (void)appendWithKey:(id)a0 dataValue:(id)a1 logger:(id)a2;
- (void)appendWithKey:(id)a0 dataAttachmentValue:(id)a1 logger:(id)a2;
- (void)_appendWithKey:(id)a0 filename:(id)a1 contentType:(id)a2 contentBlock:(id /* block */)a3;
- (id)compressedData;
- (void).cxx_destruct;

@end
