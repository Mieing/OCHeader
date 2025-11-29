@class NSString, CdnComMediaInfo;

@interface WCCanvasCommonFileRequestObject : NSObject

@property (retain, nonatomic) NSString *targetURL;
@property (retain, nonatomic) NSString *fileMD5;
@property (nonatomic) unsigned long long beginTimeStamp;
@property (nonatomic) unsigned int retryCount;
@property (retain, nonatomic) CdnComMediaInfo *cdnComInfo;

- (void).cxx_destruct;

@end
