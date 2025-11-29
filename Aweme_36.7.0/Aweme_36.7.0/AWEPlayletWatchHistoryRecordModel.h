@class NSArray;

@interface AWEPlayletWatchHistoryRecordModel : NSObject <NSCoding>

@property (copy, nonatomic) NSArray *playletHistoryArray;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
