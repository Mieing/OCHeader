@class NSString, NSURL, NSDictionary;

@interface TIMXOBroadFile : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayType;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileExtension;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) float progress;
@property (copy, nonatomic) NSString *remotePath;
@property (copy, nonatomic) NSURL *localFileURL;
@property (retain, nonatomic) NSDictionary *ext;

- (void).cxx_destruct;

@end
