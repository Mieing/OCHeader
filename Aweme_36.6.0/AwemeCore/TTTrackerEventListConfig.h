@class NSSet, NSDictionary;

@interface TTTrackerEventListConfig : NSObject

@property (nonatomic) BOOL isBlockList;
@property (copy) NSSet *filterEvents;
@property (copy) NSDictionary *filterParams;

- (void)updateEventList:(id)a0;
- (id)filterTrackWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearList;

@end
