@class NSString;

@interface RoamIncompleteTaskInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL hasIncompleteTask;
@property (nonatomic) BOOL isUnintended;
@property (nonatomic) int lastState;
@property (nonatomic) unsigned long long transferredDataSize;
@property (nonatomic) unsigned long long totalSize;

+ (void)initialize;

@end
