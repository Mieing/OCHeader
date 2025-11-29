@class NSString, NSData;

@interface BDXBridgeUploadFormData : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSData *fileData;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimeType;

+ (id)formDataWithPath:(id)a0 key:(id)a1;

- (id)initWithPath:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end
