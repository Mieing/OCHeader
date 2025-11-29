@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface AWEFeedDCPreferenceCacheModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *uninterestedAwemesInfo;
@property (retain, nonatomic) NSMutableDictionary *isShowingAwemesStartTime;
@property (retain, nonatomic) NSMutableArray *uninterestedAwemes;
@property (retain, nonatomic) NSMutableSet *interestedAwemes;
@property (nonatomic) long long infoCountLimits;

- (void).cxx_destruct;
- (id)init;

@end
