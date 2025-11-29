@class NSString;

@interface MultiTaskPageActionInfo : NSObject

@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSString *contextId;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long userAction;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) unsigned long long taskCount;
@property (nonatomic) unsigned long long outdateTaskCount;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) long long operationPath;
@property (nonatomic) unsigned long long lastStartTime;
@property (nonatomic) BOOL hasReported;

- (void).cxx_destruct;

@end
