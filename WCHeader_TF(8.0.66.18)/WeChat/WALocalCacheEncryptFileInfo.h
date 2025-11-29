@class NSString, NSURL;

@interface WALocalCacheEncryptFileInfo : NSObject

@property (copy, nonatomic) NSString *rawInjectFilePath;
@property (copy, nonatomic) NSString *fullFileUrl;
@property (retain, nonatomic) NSURL *sourceUrl;

- (void).cxx_destruct;

@end
