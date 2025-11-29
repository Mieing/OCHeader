@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCAVAssetExportSessionManager : NSObject

@property (retain, nonatomic) NSMutableArray *avExportSessions;
@property (retain, nonatomic) NSMutableArray *veExportSessions;
@property (copy, nonatomic) NSString *convertId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exportQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *exportSemaphore;
@property (retain, nonatomic) NSMutableDictionary *monitorGroupDict;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
