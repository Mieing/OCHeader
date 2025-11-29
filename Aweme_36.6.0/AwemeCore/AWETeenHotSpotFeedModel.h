@class NSString, AWETeenHotSpotModel, NSMutableArray, NSNumber;

@interface AWETeenHotSpotFeedModel : NSObject

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) AWETeenHotSpotModel *hotSpotModel;
@property (copy, nonatomic) NSString *hotID;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) unsigned long long lastViewIndex;

- (long long)totalVideoCount;
- (void).cxx_destruct;
- (id)init;

@end
