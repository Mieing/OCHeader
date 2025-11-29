@class NSLock, NSString, NSMutableDictionary, CSJTemplateModel, NSObject;
@protocol OS_dispatch_queue;

@interface CSJRemoteEngineManager : NSObject

@property (retain, nonatomic) CSJTemplateModel *onlineTemplateModel;
@property (retain) CSJTemplateModel *templateModel;
@property (copy, nonatomic) NSString *templateDirectory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadConcurrentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logSerialQueue;
@property (retain, nonatomic) NSLock *templateResourceFileLock;
@property (retain, nonatomic) NSMutableDictionary *loadingTemplateSuccessBlockDict;
@property (retain, nonatomic) NSLock *successBlockLock;

- (void).cxx_destruct;

@end
