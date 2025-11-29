@class NSMutableSet;

@interface AFDColorRingTrackSet : NSObject

@property (retain, nonatomic) NSMutableSet *hasShowSet;

- (void)tryTrackColorRingShowWithUserId:(id)a0 trackBlock:(id /* block */)a1;
- (BOOL)hasShown:(id)a0;
- (void)addShowUserId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
