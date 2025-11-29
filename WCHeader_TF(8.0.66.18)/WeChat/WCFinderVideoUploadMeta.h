@class NSString, WCFinderUploadMediaTask;

@interface WCFinderVideoUploadMeta : NSObject

@property (copy, nonatomic) NSString *videoPath;
@property (copy, nonatomic) NSString *thumbPath;
@property (copy, nonatomic) NSString *videoInfo;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *requestHeader;
@property (copy, nonatomic) id /* block */ complecteBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) WCFinderUploadMediaTask *mediaTask;

- (void).cxx_destruct;

@end
