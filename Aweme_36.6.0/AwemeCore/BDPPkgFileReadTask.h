@class NSString, BDPPkgFileIndexInfo, NSThread, NSError, NSObject, NSData;
@protocol OS_dispatch_queue;

@interface BDPPkgFileReadTask : NSObject {
    BOOL _didMatchIndex;
    BOOL _syncIfDownloaded;
    BOOL _execSync;
    BDPPkgFileIndexInfo *_indexInfo;
    NSThread *_thread;
    id /* block */ _dataCompletedBlk;
    id /* block */ _urlCompletedBlk;
    NSData *_returnData;
}

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
