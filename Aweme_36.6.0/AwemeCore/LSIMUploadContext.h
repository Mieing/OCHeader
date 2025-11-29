@class NSString, NSData;
@protocol BDExternFileReaderInterface;

@interface LSIMUploadContext : NSObject

@property (nonatomic) double uploadStartTime;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (nonatomic) BOOL useFileStream;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) int fileType;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id<BDExternFileReaderInterface> fileStreamReader;

- (void).cxx_destruct;

@end
