@class NSMutableArray, NSMutableDictionary;

@interface AWEDCFeedCellImageElementResourceReusePool : NSObject

@property (retain, nonatomic) NSMutableArray *resourceArray;
@property (retain, nonatomic) NSMutableDictionary *resourceDict;
@property (nonatomic) long long reuseCount;

- (void)updateResourceView:(id)a0;
- (id)initWithReuseCount:(long long)a0;
- (id)resourceViewByKey:(id)a0;
- (void)addResourceView:(id)a0 byKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
