@class NSString;

@interface FileId2UrlData : NSObject

@property (retain, nonatomic) NSString *fileIdForCdn;
@property (retain, nonatomic) NSString *fileIdForH5;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int fileType;

- (void).cxx_destruct;

@end
