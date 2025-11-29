@class PIABiMapTable;

@interface PIATrackerEventObject : NSObject

@property (retain, nonatomic) PIABiMapTable *categories;
@property (retain, nonatomic) PIABiMapTable *metrics;

- (void).cxx_destruct;
- (id)init;

@end
