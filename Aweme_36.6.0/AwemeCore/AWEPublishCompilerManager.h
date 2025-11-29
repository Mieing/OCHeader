@class NSMutableArray;

@interface AWEPublishCompilerManager : NSObject

@property (retain, nonatomic) NSMutableArray *queue;

+ (id)manager;

- (void)remove:(id)a0 videoData:(id)a1;
- (void)unlock;
- (void).cxx_destruct;
- (id)init;
- (BOOL)lock:(id)a0;

@end
