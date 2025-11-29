@class NSMapTable;

@interface IESECLynxCardTimerTable : NSObject

@property (retain, nonatomic) NSMapTable *timerMap;

+ (id)sharedTimerTable;

- (void).cxx_destruct;

@end
