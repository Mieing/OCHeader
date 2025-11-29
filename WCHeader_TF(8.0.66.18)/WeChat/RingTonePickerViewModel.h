@class NSMutableArray, NSMutableSet, RingToneDetail;

@interface RingTonePickerViewModel : NSObject

@property (nonatomic) unsigned int offset;
@property (copy, nonatomic) NSMutableSet *feedIDs;
@property (retain, nonatomic) RingToneDetail *ring;
@property (retain, nonatomic) NSMutableArray *rings;

- (id)init;
- (id)fetchRecommendRings:(unsigned long long)a0;
- (void)refreshForTableView;
- (void)addRingForRecommendList:(id)a0;
- (void)reportRecommendRingBackExpose:(long long)a0 end:(long long)a1;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
