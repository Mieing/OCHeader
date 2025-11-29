@class NSMutableArray;

@interface MMSoundSwitchDetector : MMObject

@property (nonatomic) unsigned int soundId;
@property (retain, nonatomic) NSMutableArray *completeHandlers;
@property (nonatomic) double beginTime;

+ (id)sharedInstance;

- (id)init;
- (void)checkSoundSwitchStatus:(id /* block */)a0;
- (void)dealloc;
- (void)complete;
- (void).cxx_destruct;

@end
