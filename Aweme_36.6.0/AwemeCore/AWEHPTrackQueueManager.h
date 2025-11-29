@class NSArray, NSString, AWEHPTrackQueue;

@interface AWEHPTrackQueueManager : NSObject <AWEHPTrackListenProtocol>

@property (retain, nonatomic) AWEHPTrackQueue *queue;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *listenList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
