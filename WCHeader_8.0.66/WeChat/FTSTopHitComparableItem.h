@class NSString;

@interface FTSTopHitComparableItem : NSObject

@property (retain, nonatomic) id topHitItem;
@property (retain, nonatomic) NSString *typeKey;
@property (nonatomic) unsigned int clickScore;

- (long long)compareUsingClickScore:(id)a0;
- (void).cxx_destruct;

@end
