@class NSMutableArray;

@interface IESUserPageFeatLocalModel : NSObject <NSCoding>

@property (nonatomic) long long createTimeMs;
@property (nonatomic) long long updateTimeMs;
@property (retain, nonatomic) NSMutableArray *playTimeList;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
