@class NSString;

@interface RingDownloadInfo : NSObject

@property (copy, nonatomic) NSString *clientMediaID;
@property (copy, nonatomic) NSString *mediaUrl;
@property (copy, nonatomic) NSString *savePath;
@property (copy, nonatomic) NSString *decodeKey;

- (void).cxx_destruct;

@end
