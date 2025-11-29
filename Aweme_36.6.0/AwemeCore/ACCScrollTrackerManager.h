@class ACCMessageInterceptor, NSMutableDictionary, NSString, NSMutableArray, ACCScrollTrackerTimer;

@interface ACCScrollTrackerManager : NSObject

@property (retain, nonatomic) ACCMessageInterceptor *interceptor;
@property (weak, nonatomic) id receiver;
@property (retain, nonatomic) ACCScrollTrackerTimer *timer;
@property (retain, nonatomic) NSMutableArray *allCellForRowOrItemDurations;
@property (retain, nonatomic) NSMutableArray *allWillDisplayCellDurations;
@property (retain, nonatomic) NSMutableDictionary *allCellContentLoadDurationMap;
@property (retain, nonatomic) NSMutableDictionary *allCellContentLoadDurations;
@property (copy, nonatomic) NSString *sceneString;
@property (copy, nonatomic) id /* block */ filterCallback;
@property (copy, nonatomic) id /* block */ trackCellForRowOrItemCallback;
@property (copy, nonatomic) id /* block */ trackWillDisplayCellCallback;
@property (copy, nonatomic) id /* block */ trackCellContentLoadCallback;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ timeInterval;
@property (copy, nonatomic) id /* block */ trackCellForRowOrItem;
@property (copy, nonatomic) id /* block */ trackWillDisplayCell;
@property (copy, nonatomic) id /* block */ trackCellContentLoad;
@property (copy, nonatomic) id /* block */ scene;

- (void)trackerAction;
- (void)trackType:(id)a0 params:(id)a1;
- (void)trackStart:(id)a0 key:(id)a1;
- (void)trackEnd:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithReceiver:(id)a0;

@end
