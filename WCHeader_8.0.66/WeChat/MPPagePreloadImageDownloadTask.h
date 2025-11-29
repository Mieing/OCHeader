@class NSString;

@interface MPPagePreloadImageDownloadTask : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *pageIdentity;
@property (nonatomic) long long retryTimes;
@property (nonatomic) unsigned long long scene;

+ (id)fileNameFromUrl:(id)a0;

- (id)initWithUrl:(id)a0 pageIdentity:(id)a1 retryTimes:(long long)a2 scene:(unsigned long long)a3;
- (id)taskID;
- (id)fileName;
- (id)description;
- (void).cxx_destruct;

@end
