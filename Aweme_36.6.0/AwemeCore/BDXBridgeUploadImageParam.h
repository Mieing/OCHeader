@class NSString, NSDictionary, NSData, NSArray;

@interface BDXBridgeUploadImageParam : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *fileData;
@property (copy, nonatomic) NSArray *formDataBody;

- (void).cxx_destruct;

@end
