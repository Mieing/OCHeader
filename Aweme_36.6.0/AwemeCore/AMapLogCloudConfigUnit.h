@class NSString, NSArray;

@interface AMapLogCloudConfigUnit : NSObject

@property (readonly, copy, nonatomic) NSString *levelStr;
@property (readonly, nonatomic) double lifeTimeOfLocalLog;
@property (readonly, nonatomic) BOOL logEnable;
@property (readonly, nonatomic) BOOL mobileUpload;
@property (readonly, nonatomic) BOOL debugInfoLogWrite;
@property (readonly, nonatomic) BOOL debugInfoLogUpload;
@property (readonly, nonatomic) NSArray *ignoreLogSet;
@property (readonly, nonatomic) unsigned long long maxSizeForSingleUpload;
@property (readonly, nonatomic) unsigned long long threadValueOfUpload;
@property (readonly, nonatomic) unsigned long long localCacheTotalSize;

- (void)_parseCloudConfig:(id)a0;
- (id)initWithCloudConfig:(id)a0 level:(id)a1;
- (void).cxx_destruct;

@end
