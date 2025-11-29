@interface AweQuaterbackLogConfiguration : NSObject

@property (nonatomic) BOOL enableModInitLog;
@property (nonatomic) BOOL enablePrintLog;
@property (nonatomic) BOOL enableInstExecLog;
@property (nonatomic) BOOL enableInstCallFrameLog;

- (id)init;

@end
