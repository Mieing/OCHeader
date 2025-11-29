@class NSString;

@interface AWEECOMIMMessageDocumentSelectedFileItem : NSObject

@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *md5;

- (void).cxx_destruct;
- (id)fileType;
- (id)fileExtension;

@end
