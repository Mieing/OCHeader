@class DownloadGlobalParameters, NSString, NSDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface TTDownloadRequestModel : NSObject

@property (retain, nonatomic) DownloadGlobalParameters *userParameters;
@property (retain) NSObject<OS_dispatch_queue> *serialChunkedDataQueue;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) BOOL autoResume;
@property (copy, nonatomic) id /* block */ headerCallback;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (retain, nonatomic) NSURL *fileDestinationURL;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ objFinishBlock;
@property (nonatomic) BOOL isUrgentMode;
@property (nonatomic) BOOL isSliced;

- (void).cxx_destruct;
- (void)dealloc;

@end
