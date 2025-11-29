@class NSArray, NSString;

@interface YtCAPTCHA_OC : JSONModel

@property (nonatomic) int fixed_interval;
@property (nonatomic) int unit;
@property (nonatomic) int rand_shift;
@property (nonatomic) int rand_inv;
@property (retain, nonatomic) NSArray *intervals;
@property (retain, nonatomic) NSString *seq_id;

- (void).cxx_destruct;

@end
