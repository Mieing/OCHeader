@class NSString, NSDictionary;

@interface IESEffectDownloadConfigParams : NSObject

@property (nonatomic) BOOL parallelDownload;
@property (nonatomic) long long queuePriority;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL enableEffectDownloadTaskScheduling;
@property (nonatomic) long long level;
@property (nonatomic) BOOL preload;
@property (nonatomic) BOOL insertFront;
@property (nonatomic) BOOL cancelExistDownloading;
@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSDictionary *bizData;

- (void).cxx_destruct;
- (id)init;

@end
