@class NSMutableArray;

@interface ResourceDownloaderLog : NSObject

@property (retain, nonatomic) NSMutableArray *logArray;

+ (void)addLog:(id)a0;
+ (void)addLog:(id)a0 detailDictionry:(id)a1;
+ (void)addLog:(id)a0 detail:(id)a1;
+ (id)sharedInstance;

- (void)addLog:(id)a0;
- (void)addLog:(id)a0 detail:(id)a1;
- (void).cxx_destruct;

@end
