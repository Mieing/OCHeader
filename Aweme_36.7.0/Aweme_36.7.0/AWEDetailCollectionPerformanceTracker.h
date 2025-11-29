@class NSMutableDictionary;

@interface AWEDetailCollectionPerformanceTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *mapTable;

+ (id)sharedTracker;

- (id)getTrackModelWithInstance:(id)a0;
- (void)clearWithInstance:(id)a0;
- (void)setTrackingPageName:(id)a0 withInstance:(id)a1;
- (void)eventBegin:(id)a0 withInstance:(id)a1;
- (void)eventEnd:(id)a0 withInstance:(id)a1;
- (void)finishWithExtraParam:(id)a0 instance:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
