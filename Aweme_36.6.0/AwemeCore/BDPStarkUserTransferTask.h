@class NSString;

@interface BDPStarkUserTransferTask : NSObject

@property (copy, nonatomic) NSString *srcPath;
@property (copy, nonatomic) NSString *destPath;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) id /* block */ completionBlk;
@property (copy, nonatomic) id /* block */ checkBlk;
@property (nonatomic) long long retryTime;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL success;

- (BOOL)copyDirectoryFromPath:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;
- (void)execute;

@end
