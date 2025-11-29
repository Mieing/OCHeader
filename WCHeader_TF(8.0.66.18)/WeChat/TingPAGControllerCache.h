@class NSMutableDictionary;

@interface TingPAGControllerCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictControllerCache;

- (id)init;
- (BOOL)canUsePAGCover:(id)a0;
- (id)getOrCreatePAGCoverController:(id)a0;
- (void).cxx_destruct;

@end
