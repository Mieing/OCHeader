@class NSString;

@interface AnimateEmojiReportModel : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL isRecentUse;

+ (id)instance;
+ (void)beginSession:(id)a0 isRecentUse:(BOOL)a1;
+ (void)endSession;
+ (void)doReport:(id)a0 node:(id)a1 playSuccess:(BOOL)a2 failedReason:(unsigned long long)a3;

- (void).cxx_destruct;

@end
