@class NSObject, NSString, NSMutableArray, DIRSConcurrentCollection, DIRSContext;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface DIRSLogger : DIRSBasicModule <IRISModule> {
    DIRSConcurrentCollection *temporaryLogs;
    NSObject<OS_dispatch_queue> *loggerQueue;
    NSObject<OS_dispatch_group> *loggerGroup;
    NSMutableArray *loggers;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

@end
