@class NSString, CdnComMediaInfo;

@interface WCCardCDNDownloadInfo : NSObject

@property (retain, nonatomic) CdnComMediaInfo *cdnMediaInfo;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int fileLength;
@property (retain, nonatomic) NSString *savePath;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (void).cxx_destruct;

@end
