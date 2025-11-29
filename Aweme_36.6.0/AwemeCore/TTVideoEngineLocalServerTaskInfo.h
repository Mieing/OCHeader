@class NSString, TTVideoEngineURLInfo;

@interface TTVideoEngineLocalServerTaskInfo : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long resolution;
@property (copy, nonatomic) NSString *localFilePath;
@property (nonatomic) long long mediaSize;
@property (nonatomic) long long cacheSizeFromZero;
@property (copy, nonatomic) NSString *decryptionKey;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long taskType;
@property (retain, nonatomic) TTVideoEngineURLInfo *urlInfo;

- (void).cxx_destruct;

@end
