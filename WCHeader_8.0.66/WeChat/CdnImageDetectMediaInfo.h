@class NSString;

@interface CdnImageDetectMediaInfo : NSObject

@property (retain, nonatomic) NSString *fileKey;
@property (nonatomic) BOOL enableHitCheck;
@property (nonatomic) BOOL trySafeCdn;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *forwardFileID;
@property (retain, nonatomic) NSString *forwardAesKey;

- (void).cxx_destruct;

@end
