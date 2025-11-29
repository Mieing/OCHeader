@class NSString, NSDictionary;

@interface BDXBridgeDownloadFileParam : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *saveToAlbum;

- (void).cxx_destruct;

@end
