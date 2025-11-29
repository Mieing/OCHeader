@class NSString, NSError;

@interface MPPageResourceDownloadCompletionParam : NSObject

@property (nonatomic) BOOL isPatch;
@property (nonatomic) BOOL hasPatchMD5;
@property (nonatomic) BOOL isZip;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int downloadedSize;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
