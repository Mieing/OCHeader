@class NSLock, NSMutableArray;

@interface BDLynxChannelsRegister : NSObject

@property (retain, nonatomic) NSMutableArray *registChannels;
@property (retain, nonatomic) NSMutableArray *registHighPriorityChannels;
@property (retain, nonatomic) NSMutableArray *registDefaultPriorityChannels;
@property (retain, nonatomic) NSLock *registLock;

+ (id)sharedInstance;

- (void)registChannel:(id)a0;
- (void)registChannels:(id)a0;
- (id)registedChannels;
- (id)registedHighPriorityChannels;
- (id)registedDefaultPriorityChannels;
- (void).cxx_destruct;
- (id)init;

@end
