@class NSString, NSMutableArray;

@interface WCPlayerPipSessionInfo : NSObject

@property (retain, nonatomic) NSString *pipId;
@property (nonatomic) int startTime;
@property (nonatomic) int stopTime;
@property (retain, nonatomic) NSMutableArray *arrTaskId;
@property (nonatomic) long long stopReason;
@property (nonatomic) BOOL isPipStoppedByEnterForeground;

- (id)init;
- (long long)getDisplayPipWindowReason;
- (void).cxx_destruct;

@end
