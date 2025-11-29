@class NSData, NSString;
@protocol BDExternFileReaderInterface;

@interface AWEIMFileUploaderContext : NSObject <NSCopying>

@property (nonatomic) BOOL useFileStream;
@property (nonatomic) BOOL forceNewEncrypt;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ buildDataBlock;
@property (retain, nonatomic) NSData *quickData;
@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) int fileType;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id<BDExternFileReaderInterface> fileStreamReader;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL isInner;
@property (copy, nonatomic) NSString *MD5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
