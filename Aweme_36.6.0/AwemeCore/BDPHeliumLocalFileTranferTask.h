@class NSString;

@interface BDPHeliumLocalFileTranferTask : NSObject

@property (copy, nonatomic) NSString *srcPath;
@property (copy, nonatomic) NSString *destPath;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ checkBlock;

- (BOOL)copyDirectoryFromPath:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;
- (void)execute;

@end
