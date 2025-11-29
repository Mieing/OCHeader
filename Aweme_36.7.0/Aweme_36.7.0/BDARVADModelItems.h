@class NSMutableArray;

@interface BDARVADModelItems : NSObject

@property (retain, nonatomic) NSMutableArray *firstLevelPartition;
@property (retain, nonatomic) NSMutableArray *largerArray;
@property (retain, nonatomic) NSMutableArray *videoArray;
@property (retain, nonatomic) NSMutableArray *smallArray;

- (void).cxx_destruct;
- (id)init;

@end
