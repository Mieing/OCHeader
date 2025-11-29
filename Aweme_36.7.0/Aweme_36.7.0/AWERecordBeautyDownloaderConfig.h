@class NSString;

@interface AWERecordBeautyDownloaderConfig : NSObject

@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSString *defaultPanelName;
@property (nonatomic) BOOL saveCache;
@property (nonatomic) long long effectTestStatusType;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (nonatomic) BOOL enablePanelRequestOpt;
@property (nonatomic) long long abGroup;

- (void).cxx_destruct;
- (id)init;

@end
