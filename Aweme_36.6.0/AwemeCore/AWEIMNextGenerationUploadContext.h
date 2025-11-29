@class NSString, NSData;
@protocol BDExternFileReaderInterface;

@interface AWEIMNextGenerationUploadContext : NSObject

@property (copy, nonatomic) NSString *assetIdentifier;
@property (nonatomic) BOOL useFileStream;
@property (nonatomic) BOOL forceNewEncrypt;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long messageType;
@property (nonatomic) int fileType;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id<BDExternFileReaderInterface> fileStreamReader;
@property (copy, nonatomic) NSString *MD5;

- (void).cxx_destruct;

@end
