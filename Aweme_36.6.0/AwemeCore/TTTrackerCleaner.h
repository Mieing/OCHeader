@class NSObject;
@protocol OS_dispatch_queue;

@interface TTTrackerCleaner : NSObject

@property (nonatomic) unsigned long long fromType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendingQueue;

+ (id)sharedCleaner;

- (void)startClean:(unsigned long long)a0;
- (void)flush:(id)a0 completion:(id /* block */)a1;
- (void)cleanOutdatedTracks;
- (void)unpackTracks:(id)a0 trackIDs:(id)a1 result:(id)a2 eventName:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
