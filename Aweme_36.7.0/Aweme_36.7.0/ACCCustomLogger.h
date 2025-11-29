@class NSMutableArray;

@interface ACCCustomLogger : NSObject

@property (retain, nonatomic) NSMutableArray *logs;

+ (id)weakInstance;
+ (void)stop;
+ (void)start;

- (void)addLog:(id)a0;
- (id)allLogs;
- (void).cxx_destruct;
- (id)init;

@end
