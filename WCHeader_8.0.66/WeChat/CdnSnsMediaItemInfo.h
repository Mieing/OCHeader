@class NSString, WCMediaItem;

@interface CdnSnsMediaItemInfo : NSObject

@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) NSString *nsUrl;
@property (nonatomic) unsigned long long decryptKey;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (nonatomic) BOOL finishFlag;

- (void).cxx_destruct;

@end
